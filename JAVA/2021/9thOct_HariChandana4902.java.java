public class PR1 {
    // Intuition : The GCD of  two factorials is equal to the smaller factorial
    // So find the minimum number among given two numbers and return its factorial
    public static void main(String[] args) {
        int a = 5;
        int b = 120;
        System.out.println(factorial(Math.min(a,b)));
    }
    public static int factorial(int a)
    {
        int fact1 = 1;
        int i = 1;
        while(i <= a)
        {
            fact1 *= i;
            i++;
        }
        return fact1;
    }
}
