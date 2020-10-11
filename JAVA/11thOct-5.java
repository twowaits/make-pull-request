import java.io.*;
import java.util.*;
import java.math.*;
import java.math.BigInteger;
class Fibbonaci
{   
    static int dp[];
    public static void main(String args[])
    {     
        FastReader in=new FastReader(); 
        int N=in.nextInt();
        dp=new int[N+1];
        setDP(N);
        fibb(N);
        for(int i=0; i<N; i++)System.out.print(dp[i]+" ");
        System.out.println();
    }
    //function to intialize the array to -1
    static void setDP(int N)
    {
        Arrays.fill(dp,-1);
        dp[0]=1;
        dp[1]=1;
    }

    static int fibb(int N)
    {
        if(N==0 || N==1)return 1;
        else 
        {
            if(dp[N]!=-1)return dp[N];
            return dp[N]=fibb(N-1)+fibb(N-2);
        }
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
