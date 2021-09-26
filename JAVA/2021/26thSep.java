// Add code here by achintya gaumat..

// Java program to generate binary numbers from 1 to n
 
import java.util.LinkedList;
import java.util.Queue;
 
public class 26thSep {
    static void generatePrintBinary(int n)
    {
        Queue<String> q = new LinkedList<String>();
 
        q.add("1");
        while (n-- > 0) {
            String s1 = q.peek();
            q.remove();
            System.out.println(s1);
            String s2 = s1;
            q.add(s1 + "0");
            q.add(s2 + "1");
        }
    }
    public static void main(String[] args)
    {
        int n = 10;
        generatePrintBinary(n);
    }
}
