import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone {
    static String[] A = {
        "",
        "1 ",
        "2 ",
        "3 ",
        "4 ",
        "5 ",
        "6 ",
        "7 ",
        "8 ",
        "9 ",
        "10 "
    };
   static String[] B = {
        "",
        "",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9"
    };

    public static String digit(long n, String left) {
        if (n == 0) {
            return "0";
        }
        if (n > 19) {
            return B[((int)n) / 10] + A[((int)n) % 10] + left;
        } else {
            return A[((int)n)] + left;
        }
    }
    public static String notowords(long n) {
        String res;
        res = digit((n % 10), "");
        if (n > 100 && n % 100!=0) {
            res = "and " + res;
        }
        res = digit(((n / 10) % 10), "ten ") + res;
        res = digit(((n / 100) % 10), "Hundred ") + res;
        res = digit(((n / 1000) % 100), "Thousand ") + res;
        res = digit(((n / 100000) % 100), "Lakh, ") + res;
        res = digit((n / 10000000) % 100, "Crore, ") + res;
        res = digit((n / 1000000000) % 100, "Billion, ") + res;
        return res;
    }
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc=new(System.in);
        long n=sc.nextLong();
        System.out.println(notowords(n));
    }
}