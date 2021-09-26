import java.util.LinkedList;
import java.util.Queue;

public class GenerateBNo
{
    static void generatePrintBinary(int n)
    {
        Queue<String> q = new LinkedList<String>();
        q.add("1");
        
        while(n-- > 0)
        {
            String s1 = q.peek();
            q.remove();
            System.out.println(s1);
            String s2 = s1;
              
            // Append "0" to s1 and enqueue it 
            q.add(s1 + "0");
              
            // Append "1" to s2 and enqueue it
            q.add(s2 + "1");
        }
    }
       
    public static void main(String[] args)
    {
        int n=10;
        generatePrintBinary(n);
    }
}
