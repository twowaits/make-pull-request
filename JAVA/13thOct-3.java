import java.io.*;
import java.util.*;
import java.math.*;
import java.math.BigInteger;
class gcd_Of_Factorial
{   
    
    public static void main(String args[])
    {     
        FastReader in=new FastReader(); 
        int N=in.nextInt();
        int A[][]=new int[N][N];
        set(A,N);
        spiral(A,N);
    }
   
    static void spiral(int A[][],int N)
    {    
        int row=0, M=N,col = 0;
       
        while (row < N && col < M)
        {

            for (int i=col; i<N; i++)
            {
                System.out.print(A[row][i] + " ");
            }
            row+=1;

            for (int i=row; i<M; i++)
            {
                System.out.print(A[i][N-1] + " ");
            }
            N--;

            if (row<N) 
            {
                for (int i=N-1; i>=col; i--)
                {
                    System.out.print(A[M-1][i] + " ");
                }
                M--;
            }

            if (col<N) 
            {
                for (int i=M-1; i>=row; i--) 
                {

                    System.out.print(A[i][row-1] + " ");
                }
                col++;
            }
        }
    }

    static void set(int A[][],int N)
    {
        int x=1;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
                A[i][j]=x++;             
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
