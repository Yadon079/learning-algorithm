import java.util.*;
import java.io.*;

public class boj_1463 {

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());

    System.out.println(dp(n, 0));
  }

  static int dp(int n, int count) {
    if(n < 2) {
      return count;
    }

    return Math.min(dp(n / 2, count + 1 + (n % 2)), dp(n / 3, count + 1 + (n % 3)));
  }

}
