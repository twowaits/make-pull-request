import java.util.*;

public class zigzag {

    public static void zigzag(int height, int total_no) {

        for (int i = 0; i < height; i++)
        {
            StringBuilder str = new StringBuilder();
            String ss = new String(new char[i]).replace('\0',' ');
            str.append(ss);
            int index = i;
            boolean count = i == height - 1;
            while(index < total_no)
            {
                str.append(index+1);
                int space = 0;
                if (count)
                {
                    space = 2 * i - 1;
                }
                else
                {
                    int skip = height - i - 1;
                    space = 2 * skip - 1;
                }

                String gap = new String(new char[space]).replace('\0',' ');
                str.append(gap);
                index += space + 1;

                if (i == 0)
                {
                    count = false;
                }
                else if (i == height - 1)
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
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int row = scanner.nextInt();
        int col = scanner.nextInt();
        zigzag(row, col);
        scanner.close();
    }
}
