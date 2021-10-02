
import java.util.*;
public class Main {
    public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                int n, sum;
                int a = 1, b = 1, t;
                n = sc.nextInt();
                System.out.print(a+" "+b +" ");
                for (int i = 2; i < n; i++) {
                    t= 0;
                    sum = a+b;
                    if (sum%5==0) System.out.print("0 ");
                    else {
                        for (int j = 2; j < sum/2; j++) {
                            if (sum % j == 0) {
                                System.out.print(sum+" ");
                                t = 1;
                                break;
                            }
                        }
                        if (t == 0) System.out.print("0 ");
                    }
                    a = b;
                    b = sum;
                }
            }
        }
