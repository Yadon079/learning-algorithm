import java.math.*;
import java.util.*;

public class Main {

  public static BigInteger[][] dp;

  public static void setDpCombination(int n, int m) {

    for (int i = 1; i <= n; i++) {
      for (int j = 0; j <= i; j++) {
        if (j == 0 || j == i) {
          dp[i][j] = new BigInteger("1");
        } else {
          dp[i][j] = dp[i - 1][j - 1].add(dp[i - 1][j]);
        }
      }
    }

  }

  public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();

    dp = new BigInteger[1001][1001];

    setDpCombination(n, m);

    System.out.println(dp[n][m]);
  }

}