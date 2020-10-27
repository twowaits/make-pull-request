import java.util.*;
class hacktoberfest1
{
	public static void main(String[] args)
	{
		Scanner d=new Scanner(System.in);
		int i,j,m,n,x,c=0;
		m=d.nextInt();
		n=d.nextInt();
		int a[][]=new int[m][n];
		
		for(i=0;i<m;i++)
		{
		   for(j=0;j<n;j++)
		   a[i][j]=d.nextInt();
		}
		x=d.nextInt();

	    for(i=0;i<m;i++)
		{
		   for(j=0;j<n;j++)
		   {
		       if(a[i][j]==x)
		       {c=1; break;}
		       else if(a[i][j]>x)
		       {break;}
		   }
		   if( ((i<m-1) && (a[i+1][0]>x)) || (c==1) )
		   break;
		}
		
		if(c==1)
		System.out.println("True");
		else
		System.out.println("False");
	}
}
