import java.util.Arrays;
import java.util.Scanner;

public class boj_15657 {

  private static int n, m;
  private static int[] map;
  private static int[] result;
  private static StringBuilder sb = new StringBuilder();

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    n = sc.nextInt();
    m = sc.nextInt();

    map = new int[n];
    result = new int[m];

    for (int i = 0; i < n; i++) {
      map[i] = sc.nextInt();
    }

    Arrays.sort(map);

    bt(0, 0);

    System.out.println(sb);
  }

  private static void bt(int start, int cnt) {
    if (cnt == m) {
      for (int i = 0; i < m; i++) {
        sb.append(result[i] + " ");
      }

      sb.append('\n');
    } else {
      for (int i = start; i < n; i++) {
        result[cnt] = map[i];

        bt(i, cnt + 1);
      }
    }
  }
}