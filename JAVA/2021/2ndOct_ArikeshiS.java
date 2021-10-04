import java.util.*;
public class ZigZag
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();
        for (int i = 0; i < a; i++) 
        {
            StringBuilder strBuild = new StringBuilder();

            strBuild.append(new String(new char[i]).replace('\0', ' '));

            int index = i;
            boolean up = i == a - 1;

            while(index < b) 
            {
                strBuild.append(index+1);

                int gapIndents;

                if (up) 
                {
                    gapIndents = 2 * i - 1;
                }
                else 
                {
                    int j = a - i - 1;
                    gapIndents = 2 * j - 1;
                }

                strBuild.append(new String(new char[gapIndents]).replace('\0', ' '));

                index += gapIndents + 1;

                if (i == 0) 
                {
                    up = false;
                }
                else if (i == a - 1) 
                {
                    up = true;
                }
                else 
                {
                    up = !up;
                }
            }

            System.out.println(strBuild.toString());
        }
    }
}
