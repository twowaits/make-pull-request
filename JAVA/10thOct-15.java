package archit;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		String str=s.next();
		StringBuilder sb=new StringBuilder();
		sb.append(str);
		sb.reverse();
		System.out.println(sb.toString());

	}

}
