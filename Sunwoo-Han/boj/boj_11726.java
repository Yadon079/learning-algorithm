import java.util.*;

public class boj_11726 {

  static int[] dp = new int[1001];

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    sc.close();

    bottomUp(n);
  }

  public static int bottomUp(int n) {
    dp[0] = 1;

    if(n > 0) {
      dp[1] = 1;
    } 

    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 2] + dp[i - 1];
        dp[i] %= 10007;
    }

    System.out.println(dp[n]);

    return dp[n];
  }

}