try:
    import requests
    from urllib.parse import unquote
    import time
    import itertools
    from threading import Thread
    import uuid
except Exception as e:
    print(e)
    c=input("Do you want to download this missing modules Y/n? ")
    if c=="y":
        import os
        os.system('python -m pip install requests ')
    else:
        exit(0)


query=input(' Paste your URL   ')
timer=time.time()
res = requests.get(query,headers={"user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.85 Safari/537.36"})
a=res.content
try:
    b=a.decode().split('"formats":[{"itag":18,"url":"')
    c=b[1].split('","mimeType":"video/mp4;')[0]
    #unquote(c)  
    url=eval(f"unquote('{c}')")
    finished=False
except:
    print("This video requires age confirmation so that's why please login by yourself can't be downloded, Or You can try our premium version which bypases then age confirmation. ")
    exit()

def download(url):
    global finished
    video=requests.get(url,headers={"user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.85 Safari/537.36"})
    name=uuid.uuid1()
    with open(f'{name}.mp4','wb') as opn:
        opn.write(video.content)
    finished=True
    
def loader():
    global finished
    for i in itertools.cycle(['\\','-','/','|',]):
        if finished:
            break
        print(f'\rDownloading {i}',end='')
    
t1=Thread(target=download,args=(url,))
t2=Thread(target=loader)

t1.start()
t2.start()
t1.join()
t2.join()

print('############# Downloded ##############')
print(f'It took {time.time()-timer} sec')

