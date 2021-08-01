import java.util.Scanner;

public class boj_10026 {

  static int[] dy = { -1, 1, 0, 0 };
  static int[] dx = { 0, 0, -1, 1 };
  static int n;
  static char[][] map;

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    n = sc.nextInt();

    map = new char[n][n];
    for (int i = 0; i < n; i++) {
      map[i] = sc.next().toCharArray();
    }
    
    int[] ans = { 0, 0 };
    boolean[][][] visit = new boolean[2][n][n];

    for (int k = 0; k < 2; k++) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (!visit[k][i][j]) {
            dfs(i, j, visit[k], map[i][j]);
            ans[k]++;
          }

          if (map[i][j] == 'G'){
            map[i][j] = 'R';
          }
        }
      }
    }

    System.out.println(ans[0] + " " + ans[1]);
    sc.close();
  }

  static void dfs(int y, int x, boolean[][] visit, char ch) {
    visit[y][x] = true;

    for (int k = 0; k < 4; k++) {
      int ny = y + dy[k];
      int nx = x + dx[k];

      if (ny < 0 || nx < 0 || ny >= n || nx >= n || visit[ny][nx] || map[ny][nx] != ch) {
        continue;
      }

      dfs(ny, nx, visit, ch);
    }
  }

}