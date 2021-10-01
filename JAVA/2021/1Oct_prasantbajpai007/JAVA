public class fib {
  
    static void Fibonacci(int N)
    {
        int num1 = 1, num2 = 1;
        System.out.print(num1 + " ");
        System.out.print(num2 + " ");
  
        int counter = 0;
  
        while (counter < N-2){
            int num3 = num2 + num1;
            num1 = num2;
            num2 = num3;
            counter = counter + 1;
            if(num3%2==1||num3%5==0||num3==2)
            System.out.print("0"+" ");
            else
            System.out.print(num3 + " ");
        }
    }
  
    public static void main(String args[])
    {
    
        int n=12;
        Fibonacci(n);
    }
}
