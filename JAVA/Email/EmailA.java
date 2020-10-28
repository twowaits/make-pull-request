package Email;

import java.util.Scanner;

public class EmailA {
    Scanner sc = new Scanner(System.in);
   private String firstName;
   private String lastName;
   private String department;
   private String Email;
   private String Password;
   private int mailbox_capacity;
   private String Alternate_Email;
   
   //displaying first name and last name using constructor
   EmailA(String f, String l)
   {
       //Giving reference to instance variable firstName and LastNAme
       firstName=f;
       lastName=l;
       
       //Creating Email 
       Email = firstName.toLowerCase()+"."+lastName.toLowerCase()+"@"+"department"+"."+"Company"+"."+"com";
       System.out.println("Email created : "+Email);
       //Alternate Email for a candidate
       setAlternate_Email("aniladhikari442@gmail.com");
       System.out.println("Alternate Email for Candidate is : "+getAlternate_Email());
       System.out.println();
       
   
       //Calling departmentDetermine() method
       department=departmentDetermine();
       System.out.println();
       System.out.println("Type of Department is : "+department);
       
       
       //Calling Randompassword method()
       Password = RandomPassword(10);
       System.out.println();
       System.out.println("Password : "+Password);
       System.out.println();
   
   }
   
   /************************************
    determining the type of department
    ***********************************/
   
   public String departmentDetermine()
   {
       System.out.print("Department Types : "
               + "\n1. Sales "
               + "\n2. Development "
               + "\n3. Accounting "
               + "\n\nEnter type of Department among given types : ");
       
       int type = sc.nextInt();
       if(type==1)
       {
           return "Sales";
       }
       else if(type==2)
       {
           return "Development";
       }
       else if(type==3)
       {
        return "Accounting";
       }
       else
           return "";
   }
   
   /************************
   Generating Random Password
   **************************/
   
   
   public String RandomPassword(int length)
   {
   String pwd = "abcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*";
   char [] password = new char[length];
   for(int i=0;i<length;i++)
   {
       int random = (int)(Math.random()*pwd.length());
       password[i]=pwd.charAt(random);
   }
   return new String(password);
   }
   
   
   /******************************
    Set method to change the password 
    ******************************/
   
   public void setchangePassword(String chg)
   {
   Password = chg;
   }
   
   /******************************
    Set method to set the Mailbox Capacity 
    ******************************/
   
   public void  setmailbox_capacity(int aba)
   {
       mailbox_capacity=aba;
   }
   
   
   /******************************
    Set method to set the Alternate Email 
    ******************************/
   
    public void setAlternate_Email(String alt)
    {
    Alternate_Email=alt;
    }
    
    /******************************
    get method for password, Email Capacity and Alternate Email  
    ******************************/
    
    public String getchangePassword()
    {
    return Password;
    }
    
    public int getmailbox_capacity()
    {
    return mailbox_capacity;
    }
   
    public String getAlternate_Email()
    {
    return Alternate_Email;
    }
    
    
    /***************************
     Displaying Name Email and MailBox Capacity
     ***************************/
    
    
//    public String GetInfo()
//    {
//    return "Name is : "+firstName+" "+lastName+
//            "\nEmail is : "+Email+
//            "\nMailbox Capacity is : "+mailbox_capacity+"mb";
//    }
    
    
    
    public String getfirstName()
    {
    return firstName;
    }
    public String getlastName()
    {
    return lastName;
    }
    public String getEmail()
    {
    return Email;
    }
}
