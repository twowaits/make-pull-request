import java.util.Scanner;
class arrange
{
    public static void main(String[] args)
    {   int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements in array");
        n = sc.nextInt();
        int ar[] = new int[n];
        for(int i = 0; i < n; i++)
        {
            ar[i] = sc.nextInt();
        }
         int zero = 0, one = 0, two = 0;
        for( int i = 0; i < n; i++){
            if(ar[i] == 0){
                zero++;
            }
            else if(ar[i] == 1){
                one++;
            }
            else{
                two++;
            }
        }
         int count = 0;
         while(count < zero){
             ar[count] = 0;
             count++;
          }
         one = zero+one;
         while(count < one){
             ar[count] = 1;
             count++;
          }
         two += one;
         while(count < two){
             ar[count] = 2;
             count++;
         }
         for( int i = 0 ; i < n; i++){
             System.out.print(ar[i]+" ");
         }
         System.out.println();
    }
}

    /*APPROACH: Implement the for loop through the array and count the frequencies of each distinct element(0 , 1 , 2) then simply change
                the values of array according to frequencies. */
        
