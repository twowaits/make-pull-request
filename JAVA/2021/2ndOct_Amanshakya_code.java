import java.io.*;
import java.util.*;

class GFG {
	 public static void main(String[] args) 
    {
        Scanner scn = new Scanner(System.in);
        int row = scn.nextInt();
        int col = scn.nextInt();
        for (int i = 0; i < row; i++) 
        {
            StringBuilder str = new StringBuilder();
            String ss = new String(new char[i]).replace('\0',' ');
            str.append(ss);
            int index = i;
            boolean counter = i == row - 1;
            while(index < col) 
            {
                str.append(index+1);
                int gapcount = 0;
                if (counter) 
                {
                    gapcount = 2 * i - 1;
                }
                else 
                {
                    int skip = row - i - 1;
                    gapcount = 2 * skip - 1;
                }

                String gap = new String(new char[gapcount]).replace('\0',' ');
                str.append(gap);
                index += gapcount + 1;

                if (i == 0) 
                {
                    counter = false;
                }
                else if (i == row - 1) 
                {
                    counter = true;
                }
                else 
                {
                    counter = !counter;
                }
            }
            System.out.println(str.toString());
        }
    }
}
