// Permutation Program

public class Perm {
	
	// Print all permutations as string
	static void printPerm(String str, String ans) {

		if (str.length() == 0) {
			System.out.print(ans + " ");
			return;
		}

		for (int i = 0; i < str.length(); i++) {

			char h = str.charAt(i);
			String r = str.substring(0, i) + str.substring(i + 1); 
			printPerm(r, ans + h); 
		}
	}

	public static void main(String[] args) {
	    String s = "AGSF";
	    printPerm(s, "");
	}
}