import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class Solution {
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);

       int input, leftD=0, rightD=0;
       int num = sc.nextInt();

       for(int j = 0; j < num; j++){
        for(int k = 0; k < num; k++){
            input = sc.nextInt();
                if(j == k) {
                leftD += input;
                }
                if(j+k == (num-1)){
                rightD += input;
                }
            }
        }
        int ans = Math.abs(leftD-rightD);

        System.out.println(ans);

        sc.close();
        }  
    }