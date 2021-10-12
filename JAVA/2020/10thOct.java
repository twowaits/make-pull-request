import java.util.*;
class String_Reverse
{
   public static void main (String[] args)
   {
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter a sentence");
      StringBuilder sb=new StringBuilder(sc.nextLine());
      System.out.println("Reversed String:- "+sb.reverse());
   }
}
