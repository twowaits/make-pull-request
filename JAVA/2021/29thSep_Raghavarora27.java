import java.util.*;

public class Sort012 {

  // O(N)
  public static void sort012(int[] arr){
    int p1 = -1,p2 = arr.length-1,itr=0;
    while(itr <= p2){
        if(arr[itr] == 0)
            swap(arr,itr++,++p1);
        else if(arr[itr] == 2)
            swap(arr,itr,p2--);
        else
            itr++;
      }
   }

  // used for swapping ith and jth elements of array
  public static void swap(int[] arr, int i, int j) {
    System.out.println("Swapping index " + i + " and index " + j);
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  public static void print(int[] arr){
    for(int i = 0 ; i < arr.length; i++){
      System.out.println(arr[i]);
    }
  }
  public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for(int i = 0 ;i < n; i++){
      arr[i] = scn.nextInt();
    }
    sort012(arr);
    print(arr);
    scn.close();
  }

}
