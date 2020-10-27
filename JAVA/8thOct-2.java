package JAVA;
import java.util.*;
 class patteen {
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();     //input number of rows
         int k=0;
         for (int i = 1; i < n; i++) 
         { 
         
             for (int j = i; j < n; j++) { 
                 System.out.print(" "); 
             } 
             while (k != (2 * i - 1)) { 
                 if (k == 0 || k == 2 * i - 2) 
                     System.out.print("*"); 
                 else
                     System.out.print(" "); 
                 k++; 
                 
             } 
             k = 0; 
             System.out.println(); 
         } 
         for (int i = 0; i < n; i++) { 
             System.out.print("* "); 
         } 
     } 
         }
        
    
        
    
    

