import java.util.*;
    
    public class Main {
    
    	    public static void main(String[] args) {
    	    	Scanner scn = new Scanner(System.in);
    	    	int num1 = scn.nextInt();
            int num2 = scn.nextInt();
            
            //storing original num
            int tnum1 = num1;
            int tnum2 = num2;
    
            while(tnum1 % tnum2 != 0){               
                int rem = tnum1 % tnum2;
              //changing divison & dividend
                tnum1 = tnum2;
                tnum2 = rem;
            }
            
            int gcd = tnum2;           
    
            System.out.println(gcd);
           
    	    }
    }
