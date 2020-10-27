import java.io.*;
import java.util.*;
import java.math.*;
import java.math.BigInteger;
class gcd_Of_Factorial
{    
    public static void main(String args[])
    {     
        FastReader in=new FastReader(); 
        /*Using a user-defined class named as FastReader for faster inputs */
        int A=in.nextInt();
        int B=in.nextInt();
        gcd_OF_Factorial(Math.min(A,B));
    }

    static void gcd_OF_Factorial(int N)
    {
        long x=1;
        for(int i=2; i<=N; i++)x*=i;
        System.out.println(x);
    }
}
//Code For FastReader
//Code For FastReader
//Code For FastReader
//Code For FastReader
class FastReader
{
    BufferedReader br;
    StringTokenizer st;
    public FastReader()
    {
        br=new BufferedReader(new InputStreamReader(System.in));
    }

    String next()
    {
        while(st==null || !st.hasMoreElements())
        {
            try
            {
                st=new StringTokenizer(br.readLine());
            }
            catch(IOException e)
            {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }

    int nextInt()
    {
        return Integer.parseInt(next());
    }

    long nextLong()
    {
        return Long.parseLong(next());
    }

    double nextDouble()
    {
        return Double.parseDouble(next());
    }

    String nextLine()
    {
        String str="";
        try
        {
            str=br.readLine();
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }
        return str;
    }

}
