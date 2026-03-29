import java.util.Scanner;

class nested15 {

  public static int minn(int a, int b, int c, int d) {
    return Math.min(Math.min(a, b), Math.min(c, d));
  }

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int m = 2 * n - 1;

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {

        int top = i;
        int bottom = m - 1 - i;
        int left = j;
        int right = m - 1 - j;

        int min = minn(top, bottom, left, right);

        System.out.print(n - min);
      }
      System.out.println();
    }
  }
}