import java.io.*;
import java.util.*;
import java.math.*;
import java.math.BigInteger;
class gcd_Of_Factorial
{   
    static int dp[];
    public static void main(String args[])
    {     
        FastReader in=new FastReader(); 
        int N=in.nextInt();
        int A[]=new int[N];
        for(int i=0; i<N; i++)
        A[i]=in.nextInt();
        sort(A);
        print(A);
}
    //function to sort the array in O(N)
    static void sort(int A[])
    {
        int N=A.length;
        int low=0,mid=0,high=N-1;
        while(mid<=high)
        {
            if(A[mid]==0)
            {
                int t=A[low];
                A[low]=A[mid];
                A[mid]=t;
                low++;
                mid++;
            }
            else if(A[mid]==2)
            {
                int t=A[mid];
                A[mid]=A[high];
                A[high]=t;
                high--;
                mid++;
            }
            else
            {
                mid++;
            }
        }
    }

    static void print(int A[])
    {
        for(int i=0; i<A.length; i++)
        System.out.print(A[i]+" ");
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
