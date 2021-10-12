import java.util.*;


public class binary {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		Queue<String> q=new LinkedList<>();
		q.add("1");
		while(n-->0)
		{
		   String s1=q.peek();
		   q.remove();
		   System.out.println(s1);
		   String s2=s1;
		   q.add(s1+"0");
		   q.add(s2+"1");
		   
		}
		
       
	}
