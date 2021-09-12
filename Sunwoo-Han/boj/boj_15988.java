import java.util.Scanner;

public class boj_15988 {

  static long[] dp = new long[1000001];

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int t = sc.nextInt();
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= 1000000; i++) {
      dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % 1000000009;
    }

    for(int i = 0; i < t; i++) {
      int n = sc.nextInt();

      System.out.println(dp[n]);
    }

    sc.close();
  }
}