import java.util.Arrays;
import java.util.Scanner;

public class boj_15654 {

  static int N, M;
  static int[] num;
  static int[] print;
  static boolean[] visited;
  static StringBuilder sb = new StringBuilder();

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    N = sc.nextInt();
    M = sc.nextInt();

    num = new int[N];
    visited = new boolean[N];
    print = new int[M];

    for (int i = 0; i < N; i++) {
      num[i] = sc.nextInt();
    }
    Arrays.sort(num);

    dfs(0, 0);

    System.out.print(sb);
    sc.close();
  }

  static void dfs(int depth, int start) {
    if (depth == M) {
      for (int i : print) {
        sb.append(i + " ");
      }
      sb.append("\n");
      
      return;
    }

    for (int i = 0; i < N; i++) {
      if (!visited[i]) {
        visited[i] = true;
        print[depth] = num[i];
        dfs(depth + 1, i + 1);
        visited[i] = false;
      }
    }
  }
}