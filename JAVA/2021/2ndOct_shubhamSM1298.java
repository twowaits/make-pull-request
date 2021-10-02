package com.company;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        Scanner q =new Scanner(System.in);
        int r =q.nextInt();
        int c =q.nextInt();
        
        int[][] a =new int[r][c];

        zigzag(a,r,c);

    }

    public static void zigzag(int [][] a, int r, int c){

    
        boolean flag=true;

        int r2=0;
        int c2=0;

        while(c2<c){
            a[r2][c2]=c2+1;
            if(r2==0){
                flag=false;
            }
            if(r2==r-1){    
                flag=true;
            }

            
            if(flag){
                r2--;
            }else{
                r2++;
            }

            c2++;
        }

        
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                if(a[i][j]>0){
                    System.out.print(a[i][j]+" ");
                }
                else{
                    System.out.print("  ");
                }

            }
            System.out.println();
        }

    }
}