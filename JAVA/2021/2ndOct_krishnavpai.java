/*
 * Printing Zig Zag pattern taking input of 1 line containing 2 spaced integers
 * Can be easily done using a 2d array, but I insistingly used for loops
 * Writing general terms does help a lot in understanding
 * Author  Krishna Pai
 * Date    2-Oct-2021
 */

import java.util.*;
public class ZigZag_Using_ForLoopsOnly {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            String input = sc.nextLine();  // input a string having 2 integers separated by a whitespace
            String[] digit = input.split(" ", 2); // splitting about space
            int row = Integer.parseInt(digit[0]);
            int col = Integer.parseInt(digit[1]);
            int n = 1;
             for(int i=1;  1+ (i-1)*(2*row-2)<=col;  i++) {  //printing first row
                 System.out.print(1 + (i - 1) * (2 * row - 2));
                 for (int j = 1; j <= 2 * row - 2; j++) {
                     System.out.print("\t");
                 }
             }
            System.out.print("\n");
            //moved to the middle rows section ( a bit lenghty)
             //---------------------------------------------------------
              for( int z=0;z<row-2;z++){

                  for(int j=0; j<=col;j++){
                      for(int s= 0; s<=z;s++){
                          System.out.print("\t");//printed spaces before each entry
                      }

                      //I recomend you to take a pencil and paper and write general term
                      if(z+2+2*(row-1)*j <=col) {
                          System.out.print(z+2+2*(row-1)*j);
                      }
                      
                      else{
                          break;
                      }
                      // use your AP knowledge don't get bogged down
                      //you will only understand if you write it on paper

                      for(int ms= 0; ms<= 2*(row - z)-5; ms++){
                          System.out.print("\t");
                      }
                      if((z+2+2*(row-1)*j) + (2*(row-z-2))<=col) {
                          System.out.print((z+2+2*(row-1)*j) + (2*(row-z-2)));
                      }
                      else{
                          break;
                      }

                      for(int es = 0; es<=z;es++){
                          System.out.print("\t");
                      }
                  }
                  System.out.print("\n");

              }

              for(int y= 1;y<row;y++){
                  System.out.print("\t");
              }

            for(int k=1;  row+ (k-1)*(2*row-2)<=col;  k++) {  //printing last row
                System.out.print(row+ (k - 1) * (2 * row - 2));
                for (int j = 1; j <= 2 * row - 2; j++) {
                    System.out.print("\t");//I used tab instead of spaces to align everything
                }
            }
    }
}
