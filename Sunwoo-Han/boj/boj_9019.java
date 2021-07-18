
import java.io.*;
import java.util.*;

public class boj_9019 {

  public static boolean[] visited;
  public static final String[] DSLR = { "D", "S", "L", "R" };

  public static class Node {
    public int num;
    public String result;

    public Node(int num, String result) {
      this.num = num;
      this.result = result;
    }
  }

  private static void bfs(int a, int b) {
    Queue<Node> q = new LinkedList<Node>();

    q.add(new Node(a, ""));

    while (!q.isEmpty()) {
      Node node = q.poll();
      int num = node.num;
      String result = node.result;

      if (num == b) {
        System.out.println(result);

        return;
      }

      for (int i = 0; i < DSLR.length; i++) {
        int nextNum = funcDSLR(num, DSLR[i]);

        if (!visited[nextNum]) {
          q.add(new Node(nextNum, result + DSLR[i]));
          visited[nextNum] = true;
        }
      }
    }
  }

  private static int funcDSLR(int n, String type) {
    int ret = 0;
    int first = 0;
    int last = 0;

    switch (type) {
      case "D":
        ret = (2 * n) % 10000;
        break;

      case "S":
        ret = (n == 0) ? 9999 : n - 1;
        break;

      case "L":
        first = n / 1000;
        last = n % 1000;
        ret = (last * 10) + first;
        break;

      case "R":
        first = n % 10;
        last = n / 10;
        ret = first * 1000 + last;
        break;

      default:
        break;
    }

    return ret;
  }

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = null;

    int n = Integer.parseInt(br.readLine());
    visited = new boolean[10000];

    for (int i = 0; i < n; i++) {
      Arrays.fill(visited, false);
      st = new StringTokenizer(br.readLine());

      int a = Integer.parseInt(st.nextToken());
      int b = Integer.parseInt(st.nextToken());

      bfs(a, b);
    }
  }

}