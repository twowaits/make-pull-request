import java.util.Arrays; 
import java.util.Scanner;
class arraysort
{
    public static void main()
    {    int m,n,i,j,element;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no of rows :");
        m=sc.nextInt();
        System.out.println("Enter no of columns :");
        n=sc.nextInt();
        System.out.println("Enter element to be searched :");
        element = sc.nextInt();
        int[][] ar = new int[m][n];
        for(i=0; i<m;i++)
         {            
            for(j=0; j<n;j++)
            {   System.out.println("Enter elements of array");
                ar[i][j]=sc.nextInt();
            }
         }
         arraysort obj = new arraysort();
         obj.completesort(ar,m);
       
        int start = 0;
        int end = m*n-1;
        int counter =0;
 
        while(start<=end){
            int mid=(start+end)/2;
            int midX=mid/n;
            int midY=mid%n;
 
            if(ar[midX][midY]==element) 
                counter=1;
 
            if(ar[midX][midY]<element){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        if(counter==1)
        System.out.println(element + " True");
        else
        System.out.println(element + " False");
 
     
 
    }
        void rowsort(int mat[][], int p) 
    { 
        for (int i = 0; i < p; i++) 
        Arrays.sort(mat[i]); 
    } 
    void transpose(int mat[][], int k) 
    { 
        for (int i = 0; i < k; i++) 
            for (int j = i + 1; j < k; j++)  
                {
                int temp=mat[i][j]; 
                mat[i][j]=mat[j][i]; 
                mat[j][i]=temp; 
                } 
            }
    void completesort(int mat[][],int l) 
    { 
        
       rowsort(mat, l);
        transpose(mat, l); 
        rowsort(mat, l); 
        transpose(mat, l); 
    }
} 