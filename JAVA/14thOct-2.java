import java.util.*;

class MaximumConsecutiveGap{
    public static void main(String[] args){
        int arr[] = new int[]{9, 7, 0, 2, 12, 1, 17}; 
        System.out.println("Maximum difference will be:"+maxSortedAdjacentDiff(arr)); 
    }

    static int maxSortedAdjacentDiff(int[] arr) { 
        
        int max = arr[0],n=arr.length; 
        int minVal = arr[0]; 

        for (int i = 1; i < n; i++) { 
            max = Math.max(max, arr[i]); 
            minVal = Math.min(minVal, arr[i]); 
        } 
        int maxB[] = new int[n - 1]; 
        int minB[] = new int[n - 1]; 
        Arrays.fill(maxB, 0, n - 1, Integer.MIN_VALUE); 
        Arrays.fill(minB, 0, n - 1, Integer.MAX_VALUE); 

        float delta = (float) (max - minVal) / (float) (n - 1); 
        int Prev = minVal; 
        int maxGap = 0;

        for (int i = 0; i < n; i++) { 
            if (arr[i] == max || arr[i] == minVal) { 
                continue; 
            } 
            int index = (int) (Math.round((arr[i] - minVal) / delta)); 

            // System.out.println("index ="+index+" for element="+arr[i]);
            if (maxB[index] == Integer.MIN_VALUE) { 
                maxB[index] = arr[i]; 
            } else { 
                maxB[index] = Math.max(maxB[index], arr[i]); 
            } 
            if (minB[index] == Integer.MAX_VALUE) { 
                minB[index] = arr[i]; 
            } else { 
                minB[index] = Math.min(minB[index], arr[i]); 
            } 
        } 
   
 
        for (int i = 0; i < n - 1; i++) { 
            if (minB[i] == Integer.MAX_VALUE) { 
                continue; 
            } 
            maxGap = Math.max(maxGap, minB[i] - Prev); 
            Prev = maxB[i]; 
        } 
        maxGap = Math.max(maxGap, max - Prev); 
  
        return maxGap; 
    } 
}