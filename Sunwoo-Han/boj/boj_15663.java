import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class boj_15663 {

  public static int N, M;
  public static int[] nums, perm;
  public static boolean[] visit;
  public static StringBuilder sb = new StringBuilder();

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    N = Integer.parseInt(st.nextToken());
    M = Integer.parseInt(st.nextToken());

    nums = new int[N];
    perm = new int[M];
    visit = new boolean[N];

    st = new StringTokenizer(br.readLine());

    for (int i = 0; i < N; i++) {
      nums[i] = Integer.parseInt(st.nextToken());
    }

    Arrays.sort(nums);

    dfs(0);

    System.out.println(sb);
  }

  static void dfs(int cnt) {
    if (cnt == M) {
      for (int p : perm) {
        sb.append(p).append(' ');
      }

      sb.append('\n');

      return;
    } else {
      int before = 0;

      for (int i = 0; i < N; i++) {
        if (visit[i]) {
          continue;
        } else if (before != nums[i]) {
          visit[i] = true;
          perm[cnt] = nums[i];
          before = nums[i];
          dfs(cnt + 1);
          visit[i] = false;
        }
      }
    }
  }

}