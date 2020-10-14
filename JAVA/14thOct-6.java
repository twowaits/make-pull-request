import java.io.*;
import java.util.*;
import java.math.*;
import java.math.BigInteger;
class gcd_Of_Factorial
{   
    static FastReader in=new FastReader();   
    static int min,max,ans;
    static boolean present[];
    public static void main(String args[])
    {     
        int N=in.nextInt();
        int A[]=input(N);
        set_MinMax(A);
        
        present=new boolean[(max-min)+1];
        set_Present(A);
        find();
        System.out.println(ans);
    }

    static void find()
    {
        ans=0;
        min=0;
        for(int i=0; i<present.length; i++)
        {
            if(present[i])
            {
                ans=Math.max(ans,i-min);
                min=i;
            }
        }

    }

    static void set_Present(int A[])
    {
        for(int i=0; i<A.length; i++)
        {
            present[A[i]-min]=true;
        }
    }

    static void set_MinMax(int A[])
    {
        min=A[0];
        max=A[0];
        for(int i=1; i<A.length; i++)
        {
            min=Math.min(min,A[i]);
            max=Math.max(max,A[i]);
        }
    }

    static int[] input(int N)
    {
        int A[]=new int[N];
        for(int i=0; i<N; i++)
            A[i]=in.nextInt();

        return A;
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
