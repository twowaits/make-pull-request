import java.util.Scanner;
class spiral{
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size");
        int l=sc.nextInt();
        int cmin=0,cmax=l-1,rmin=0,rmax=l-1;
        int spiral[][]=new int[l][l];
        int val=1;
        int i;
        while(cmin<=cmax){
        for (i=cmin;i<=cmax;i++){
            spiral[rmin][i]=val;
            val+=1;
        }
        for(i=rmin+1;i<=rmax;i++){
            spiral[i][cmax]=val;
            val+=1;}
        for(i=cmax-1;i>=cmin;i--){
            spiral[rmax][i]=val;
            val+=1;}
        for(i=rmax-1;i>=cmin+1;i--){
            spiral[i][cmin]=val;
            val+=1;}
        cmin+=1;
        cmax-=1;
        rmin+=1;
        rmax-=1;}    
        for(int a=0;a<spiral.length;a++)
        { for(int b=0;b<spiral.length;b++)
            { System.out.print(spiral[a][b]+" ");
            }System.out.println();}
        }
    }