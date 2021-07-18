import java.util.Scanner;

public class boj_6064 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    for (int tc = 1; tc <= t; tc++) {
      int m = sc.nextInt(), n = sc.nextInt(), x = sc.nextInt(), y = sc.nextInt();

      int lcm = m * n / gcd(m, n);
      int cnt = 0;
      int ans = -1;
      while (cnt * m < lcm) {
        if ((cnt * m + x - y) % n == 0) {
          ans = cnt * m + x;
          break;
        }
        cnt++;
      }

      System.out.println(ans);
    }
    sc.close();
  }

  static int gcd(int n1, int n2) {
    if (n2 == 0)
      return n1;
    return gcd(n2, n1 % n2);
  }
}