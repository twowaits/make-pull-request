import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int R = sc.nextInt();
    int C = sc.nextInt();
    for (int i = 0; i < R; i++) {
      StringBuilder sb = new StringBuilder();
      sb.append(new String(new char[i]).replace('\0', ' '));

      int index = i;
      boolean up = i == R - 1;
      while(index < C) {
        sb.append(index+1);

        int gapSize;
        if (up) {
          gapSize = 2 * i - 1;
        } else {
          int j = R - i - 1;
          gapSize = 2 * j - 1;
        }
        sb.append(new String(new char[gapSize]).replace('\0', ' '));
        index += gapSize + 1;
        if (i == 0) {
          up = false;
        } else if (i == R - 1) {
          up = true;
        } else {
          up = !up;
        }
      }
      System.out.println(sb.toString());
    }
  }
}