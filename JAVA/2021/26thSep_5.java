import java.util.Scanner;

// add by Naman Parashar.
public class Bin{
    int n;
    Bin(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        n=sc.nextInt();
    }
    public void generateBinNumber(){
        for (int i = 1; i <=n ; i++) {
            System.out.println(Integer.toBinaryString(i));
        }
    }
}
class Exe{
    public static void main(String[] args) {
        Bin b =new Bin();
        b.generateBinNumber();
    }
}
