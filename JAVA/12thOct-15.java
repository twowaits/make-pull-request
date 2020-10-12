package archit;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int[] arr=new int[n];
		int c0=0;
		int c1=0;
		int c2=0;
		for(int i=0;i<n;i++)
		{
			arr[i]=s.nextInt();
			if(arr[i]==0)
				c0++;
			else if(arr[i]==1)
				c1++;
			else
				c2++;
		}
		for(int i=0;i<n;)
		{
			while(c0-->0)
			{
				arr[i]=0;
				i++;
			}
			while(c1-->0)
			{
				arr[i]=1;
				i++;
			}
			while(c2-->0)
			{
				arr[i]=2;
				i++;
			}
		}
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
		
	}

}
