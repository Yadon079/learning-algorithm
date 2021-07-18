import java.io.*;
import java.util.*;

public class boj_11724 {

  static ArrayList<ArrayList<Integer>> graph = new ArrayList<>();
  static boolean[] visited;

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    String[] str = br.readLine().split(" ");
    int n = Integer.parseInt(str[0]);
    int m = Integer.parseInt(str[1]);
    visited = new boolean[n + 1];

    for(int i = 0; i <= n; i++) {
      graph.add(new ArrayList<>());
    }

    while(m-- > 0) {
      String[] uv = br.readLine().split(" ");
      int u = Integer.parseInt(uv[0]);
      int v = Integer.parseInt(uv[1]);

      graph.get(u).add(v);
      graph.get(v).add(u);
    }

    int answer = 0;

    for(int i = 1; i <= n; i++) {
      if(dfs(i)) {
        answer += 1;
      }
    }

    bw.write(String.valueOf(answer));
    bw.flush();
    bw.close();
  }

  private static boolean dfs(int x) {
    if (visited[x]) {
      return false;
    } else {
      visited[x] = true;
      int size = graph.get(x).size();

      for (int i = 0; i < size; i++) {
        int value = graph.get(x).get(i);

        if (!visited[value]) {
          dfs(value);
        }
      }

      return true;
    }
  }

  private static boolean bfs(int x) {
    Queue<Integer> queue = new LinkedList<>();

    if(visited[x]) {
      return false;
    } else {
      queue.add(x);
      visited[x] = true;

      while(!queue.isEmpty()) {
        x = queue.remove();
        int size = graph.get(x).size();
      
        for(int i = 0; i < size; i++) {
          int value = graph.get(x).get(i);
          
          if(!visited[value]) {
            queue.add(value);
            visited[value] = true;
          }
        }
      }

      return true;
    }
    
  }

}
