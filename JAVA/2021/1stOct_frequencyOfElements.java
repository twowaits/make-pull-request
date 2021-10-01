import java.io.*;
import java.util.*;

class freqCalc {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int a[] = {3,4,4,5,1};
	    int i = 0, prev = a[0], count = 1;
	    Arrays.sort(a); //sorting in ascending -> 1,3,4,4,5
	    for(i = 1; i<a.length;i++){
	        if(a[i] == prev)
	             count ++; //incrementing frequnecy
	        else{
	            System.out.println("Frequency of "+prev+": "+ count);
	            count = 1;
	       }
	        prev = a[i];
	    }
	  //Last element
	    System.out.println("Frequency of "+prev+": "+ count);
	}
}