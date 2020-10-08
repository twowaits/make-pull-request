import java.io.*;
import java.util.*;
import java.math.*;
import java.math.BigInteger;
class Pyramid
{    
    static StringBuilder pattern=new StringBuilder(); //using StringBuilder to store the entire pattern and print it in one go
    public static void main(String args[])
    {     
        FastReader in=new FastReader(); 
        /*Using a user-defined class named as FastReader for faster inputs */
        int N=in.nextInt();
        print(N);
        
    }
    //Function to print the pattern
    static void print(int N)
    {
        int k=0;
        for(int i=1; i<N; i++)
        {
            for(int j=1; j<2*N; j++)
            {
                if(j==N+k || j==N-k)pattern.append("* ");
                else pattern.append("  ");
            }
            k++;
            pattern.append("\n");
        }
        for(int i=1; i<2*N; i++)pattern.append("* ");
     
        System.out.println(pattern);
        
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
