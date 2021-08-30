import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class boj_13460 {

  static int ans;

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int N = Integer.parseInt(st.nextToken());
    int M = Integer.parseInt(st.nextToken());

    int RI = 0, RJ = 0, BI = 0, BJ = 0;
    char[][] arr = new char[N][M];

    for (int i = 0; i < N; i++) {
      arr[i] = br.readLine().trim().toCharArray();

      for (int j = 0; j < M; j++) {
        if (arr[i][j] == 'R') {
          RI = i;
          RJ = j;
          arr[i][j] = '.';
        } else if (arr[i][j] == 'B') {
          BI = i;
          BJ = j;
          arr[i][j] = '.';
        }
      }
    }

    Queue<int[]> q = new LinkedList<int[]>();

    q.add(new int[] { RI, RJ, BI, BJ, 0, 0 });

    while (true) {
      int[] t = q.poll();

      if (t[4] >= 10) {
        break;
      }

      if (t[5] != 1) {
        int ri = t[0], rj = t[1], bi = t[2], bj = t[3];

        while (true) {
          if (arr[bi - 1][bj] == 'O') {
            bi--;
            break;
          } else if (arr[bi - 1][bj] == '#') {
            break;
          }
          bi--;
        }

        while (true) {
          if (arr[ri - 1][rj] == 'O') {
            ri--;
            break;
          } else if (arr[ri - 1][rj] == '#') {
            break;
          }

          ri--;
        }

        if (arr[bi][bj] != 'O') {
          if (arr[ri][rj] == 'O') {
            System.out.println(t[4] + 1);
            System.exit(0);
          } else {
            if (ri == bi && rj == bj) {
              if (t[0] > t[2]) {
                ri++;
              } else {
                bi++;
              }
            }

            q.add(new int[] { ri, rj, bi, bj, t[4] + 1, 1 });
          }
        }
      }

      if (t[5] != 2) {
        int ri = t[0], rj = t[1], bi = t[2], bj = t[3];

        while (true) {
          if (arr[bi + 1][bj] == 'O') {
            bi++;
            break;
          } else if (arr[bi + 1][bj] == '#') {
            break;
          }

          bi++;
        }

        while (true) {
          if (arr[ri + 1][rj] == 'O') {
            ri++;
            break;
          } else if (arr[ri + 1][rj] == '#') {
            break;
          }

          ri++;
        }

        if (arr[bi][bj] != 'O') {
          if (arr[ri][rj] == 'O') {
            System.out.println(t[4] + 1);
            System.exit(0);
          } else {
            if (ri == bi && rj == bj) {
              if (t[0] < t[2]) {
                ri--;
              } else {
                bi--;
              }
            }

            q.add(new int[] { ri, rj, bi, bj, t[4] + 1, 2 });
          }
        }
      }

      if (t[5] != 3) {
        int ri = t[0], rj = t[1], bi = t[2], bj = t[3];

        while (true) {
          if (arr[bi][bj - 1] == 'O') {
            bj--;
            break;
          } else if (arr[bi][bj - 1] == '#') {
            break;
          }

          bj--;
        }

        while (true) {
          if (arr[ri][rj - 1] == 'O') {
            rj--;
            break;
          } else if (arr[ri][rj - 1] == '#') {
            break;
          }

          rj--;
        }

        if (arr[bi][bj] != 'O') {
          if (arr[ri][rj] == 'O') {
            System.out.println(t[4] + 1);
            System.exit(0);
          } else {
            if (ri == bi && rj == bj) {
              if (t[1] > t[3]) {
                rj++;
              } else {
                bj++;
              }
            }

            q.add(new int[] { ri, rj, bi, bj, t[4] + 1, 3 });
          }
        }
      }

      if (t[5] != 4) {
        int ri = t[0], rj = t[1], bi = t[2], bj = t[3];

        while (true) {
          if (arr[bi][bj + 1] == 'O') {
            bj++;
            break;
          } else if (arr[bi][bj + 1] == '#') {
            break;
          }
          bj++;
        }

        while (true) {
          if (arr[ri][rj + 1] == 'O') {
            rj++;
            break;
          } else if (arr[ri][rj + 1] == '#') {
            break;
          }
          rj++;
        }

        if (arr[bi][bj] != 'O') {
          if (arr[ri][rj] == 'O') {
            System.out.println(t[4] + 1);
            System.exit(0);
          }
          if (ri == bi && rj == bj) {
            if (t[1] < t[3]) {
              rj--;
            } else {
              bj--;
            }
          }

          q.add(new int[] { ri, rj, bi, bj, t[4] + 1, 4 });
        }
      }

    }
    
    System.out.println(-1);
  }
}