/*question :Add following functionalities to it :

Take input the value of 'n', upto which you will print.
-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
Sample Input :
12
27

Sample Output :
1 1 0 0 0 8 0 21 34 0 0 144
1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418

No need to wait for getting assigned, you can go ahead attempt the issues and raise a PR by 10 AM 2nd Oct.
We will review any comments or PRs at 5 PM & 10 PM on 1st Oct, will give feedback if needed.
How to name your file?

Go to folder : "/JAVA/2021/"
Take today's date, i.e. 1stOct
Take your GitHUB username id like "hrithik339", "hacker-boy", etc or anything which you have.
File extension = ".java" in this issue.
Combine all 3 to get your file name : Date + "_" + Username + File Extension, ex. "1stOct_hrithik339.java". Create this file in above mentioned folder only "/JAVA/2021/".

This will ensure no file will be conflict and any number of contributors can work on the same issue.

If you have any query ask in comments below, kindly follow this pattern strictly.
*/

class fibo_hacks 
{
  
    static void Fibonacci(int N)
    {
        int num1 = 1, num2 = 1;
        System.out.print(num1 + " ");
        System.out.print(num2 + " ");
  
        int counter = 0;
  
        while (counter < N-2)
		{
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
    
        int n1=12;  //testing with first test case...
        Fibonacci(n1);
		System.out.println();
		int n2=27;  //second test case...
		Fibonacci(n2);
    }
}
//end