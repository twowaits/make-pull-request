import java.util.*;
public class ZigZag{
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int row=sc.nextInt();
        int col=sc.nextInt();
        int arr[][]=new int[row][col];
        boolean flag=true;
        int i = 0;
        for(int x=0;x<col;x++){
            arr[i][x]=x+1;
            if(i==0)
                flag=false;
            if(i==row-1)
                flag=true;
            if(flag)
                i--;
            else
                i++;
        }
        for (int x=0;x<row;x++){
            for (int y=0;y<col;y++){
                if(arr[x][y]>0){
                    System.out.print(arr[x][y]+" ");
                }
                else{
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}
