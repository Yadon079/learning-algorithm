import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

/* 
이중 배열로 풀던데 연구해봐야할 듯
*/
public class boj_11725 {

  static int[] parents;
  static List<Integer>[] list;
  static boolean[] visit;
  static int n;

  private static void dfs(int v) {
    visit[v] = true;

    for (int i : list[v]) {
      if (!visit[i]) {
        parents[i] = v;
        dfs(i);
      }
    }
  }

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st;

    n = Integer.parseInt(br.readLine());

    list = new ArrayList[n + 1];
    parents = new int[n + 1];

    for (int i = 1; i <= n; i++) {
      list[i] = new ArrayList<>();
    }

    visit = new boolean[n + 1];

    for (int i = 0; i < n - 1; i++) {
      st = new StringTokenizer(br.readLine());

      int a = Integer.parseInt(st.nextToken());
      int b = Integer.parseInt(st.nextToken());

      list[a].add(b);
      list[b].add(a);
    }

    dfs(1);

    for (int i = 2; i <= n; i++) {
      System.out.println(parents[i]);
    }

  }
}