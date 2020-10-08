import java.util.Scanner; 
public class star {
    
    public static void main(String[] args){
    int n,x=0;
    Scanner sc = new Scanner(System.in); 
    n= sc.nextInt();
    
   for(int i=1;i<=n-1;i++){
      
        for(int j=1;j<=2*n-1;j++){
            if(j==n-x || j==n+x){
              System.out.print("*");}

            
            else {  System.out.print(" ");          }
            
        }
        x=x+1;
        System.out.println();
        
       
   }
   for(int i=1;i<=n;i++){System.out.print("* ");}
    }
        
    }
    
