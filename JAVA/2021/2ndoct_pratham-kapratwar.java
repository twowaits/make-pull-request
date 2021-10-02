package hactoberfest;
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt(); // for taking an inputs
        int cols = sc.nextInt();
        for (int i=0; i<rows; i++)
        {
            StringBuilder str = new StringBuilder();
            String ss = new String(new char[i]).replace('\0',' ');
            str.append(ss); // to append 
            int idx = i;
            boolean count = i == rows - 1;
            while(idx<cols)
            {
                str.append(idx+1);
                int space = 0;
                if (count)
                {
                    space = 2*i-1;
                }
                else
                {
                    int skip = rows-i-1;
                    space = 2*skip-1;
                }
                
                String gap = new String(new char[space]).replace('\0',' ');
                str.append(gap);
                idx += space + 1;

                if (i==0)
                {
                    count = false;
                }
                else if (i == rows-1)
                {
                    count = true;
                }
                else
                {
                    count = !count;
                }
            }
            System.out.println(str.toString());
        }
    }
}