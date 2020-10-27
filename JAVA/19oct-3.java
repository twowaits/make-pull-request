import java.util.Scanner;
class oct19
{ public static void main (String []args)
{
  int [][] mymatrix= {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter the value to search");
  int val=sc.nextInt();
  int g=0;
  for(int i=0;i<5;i++){
      for (int j=0;j<5;j++){
          if(mymatrix[i][j]==val){ g++;}
      }
  }
  if(g>0){System.out.println("true");}
  else System.out.println("false");
  sc.close();
}}