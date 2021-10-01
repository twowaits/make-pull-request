import java.util.Scanner;
public class ArrayDeclationPractice {
    public static void main(String[] args) {
        Scanner cc=new Scanner(System.in);
        int []marks;
        marks=new int[3];
        marks[0]=98;
        marks[1]=99;
        marks[2]=100;
        System.out.println("the array element is");
        for(int i=0;i<marks.length;i++)
        {
            System.out.println(marks[i]);
        }
        String []student={"Rangan","Anirban","Chirantan","miko","Anisha","Basudha"};
        System.out.println("the array elements are:");
        for(String element:student)
        {
           System.out.println(element);
        }
        System.out.println("The new array  size is:");
        int s= cc.nextInt();
        int[]result=new int[s];
        System.out.println("the array elements are:");
        for(int i=0;i< result.length;i++)
        {
          result[i]= cc.nextInt();
        }
        System.out.println("the reverse of the array is:");
        for(int i=s-1;i>=0;i--)
        {
            System.out.println(result[i]);
        }
    }
}
