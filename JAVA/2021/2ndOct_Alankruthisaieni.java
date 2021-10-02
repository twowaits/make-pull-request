import java.util.*;
public class 2ndOct_Alankruthisaieni {
  public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int rows=sc.nextInt();
		int cols=sc.nextInt();
		int[][] arr=new int[rows][cols];
		int count=0,ind=0,flag=0,i=0,j=0;
        while(count<cols){
		      arr[ind][count]=count+1;
		      if(flag==0){
    		      ind+=1;
    		  }
    		  else{
    		      ind-=1;
    		  }
    		  count+=1;
		      if(ind==7){
		          ind-=2;
		          flag=1;
		      }
		      if(ind==-1){
		          ind+=2;
		          flag=0;
		      }
		}
		for(i=0;i<rows;i++){
		    for(j=0;j<cols;j++){
		        if(arr[i][j]!=0){
		            System.out.print(arr[i][j]);
		        }
		        else
		            System.out.print(" ");
		    }
		    System.out.println();
		}
	}
}
