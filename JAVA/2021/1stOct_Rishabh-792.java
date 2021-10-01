import java.util.Scanner;

public class Main {

    public static boolean isPrime (int num){
        for(int i=2; i*i <= num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n - ");  
        int n = sc.nextInt();
        int [] arr;
        arr = new int [n]; 
        arr[0] = 1;
        arr[1] = 1;

        System.out.print(arr[0] + " " + arr[1] + " ");

        for(int i = 2 ; i < n ; i++){
            arr[i] = arr[i-1] + arr[i-2];

            if(isPrime(arr[i]) || (arr[i]%5 == 0)){
                System.out.print(0 + " ");
            }
            else{
                System.out.print(arr[i] + " ");
            }
        }
    }
}
