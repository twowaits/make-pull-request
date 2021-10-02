package com.company;
import java.io.*;
import java.util.*;

public class ZigZag {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int row = scan.nextInt();
        int col = scan.nextInt();
        for (int i = 0; i < row; i++)
        {
            StringBuilder str = new StringBuilder();
            String ss = new String(new char[i]).replace('\0',' ');
            str.append(ss);
            int idx = i;
            boolean count = i == row - 1;
            while(idx < col)
            {
                str.append(idx+1);
                int space = 0;
                if (count)
                {
                    space = 2 * i - 1;
                }
                else
                {
                    int skip = row - i - 1;
                    space = 2 * skip - 1;
                }

                String gap = new String(new char[space]).replace('\0',' ');
                str.append(gap);
                idx += space + 1;

                if (i == 0)
                {
                    count = false;
                }
                else if (i == row - 1)
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
