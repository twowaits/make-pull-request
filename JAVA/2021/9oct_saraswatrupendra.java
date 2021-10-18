public class GCD_Factorial{ 
      
static int fact(int n) 
{ 
    if (n <= 1) 
        return 1; 
    int ans = 2; 
    for (int i = 3; i <= x; i++) 
        ans = ans * i; 
    return ans; 
} 
  
static int gcdOfFact(int m, int n) 
{ 
    int min =Math.min(m,n);
    return fact(min); 
} 
  
    /* Driver program to test above functions */
    public static void main (String[] args) 
    { 
        int m = 5, n = 120; 
          
        System.out.println(gcdOfFact(m, n)); 
    } 
} 
