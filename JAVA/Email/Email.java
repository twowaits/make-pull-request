package Email;
public class Email {
    public static void main(String[] args) {
        EmailA em = new EmailA("Anil","Adhikari");
        em.setmailbox_capacity(1000);
        System.out.println("Your Name is : "+em.getfirstName()+" "+em.getlastName());
        System.out.println("Your Email Address is : "+em.getEmail());
        System.out.println("Mailbox Capacity is : "+em.getmailbox_capacity()+"mb");
        
        
        
        
        
        //System.out.println(em.GetInfo());
        
        
        
        
//        System.out.println("Alternate Email is : "+em.getAlternate_Email());
//        em.setchangePassword("AnilAdhikari");
//        System.out.println("Password changed to : "+em.getchangePassword());
//        em.setmailbox_capacity(1000);
//        System.out.println("mailbox capacity is : "+em.getmailbox_capacity());
    }
 
}
