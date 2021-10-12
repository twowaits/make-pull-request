// Java program to print all the permutations 
// of the given string 
import java.lang.*;
import java.util.Scanner;
class StringPermutation { 
  
    // Function to print all the permutations of str 
    static void printPermutation(String str, String ans) 
    { 
  
        // If string is empty 
        if (str.length() == 0)
        { 
            System.out.print(ans + " "); 
            return; 
        } 
  
        for (int i = 0; i < str.length(); i++) 
        { 
  
            // ith character of str 
            char ch = str.charAt(i); 
  
            // Rest of the string after excluding the ith character
            String res = str.substring(0, i) +  
                         str.substring(i + 1); 
  
            // Recurvise call 
            printPermutation(res, ans + ch); 
        } 
    } 
  
    // Main method 
    public static void main(String[] args) 
    { 
        Scanner sc = new Scanner(System.in); //Taking String input from user
        String s = sc.nextLine(); 
        printPermutation(s, ""); 
    } 
} 