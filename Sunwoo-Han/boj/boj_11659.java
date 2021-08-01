import java.util.*;
import java.io.*;

public class boj_11659 {

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());
    StringBuilder sb = new StringBuilder();

    int n = Integer.parseInt(st.nextToken());
    int m = Integer.parseInt(st.nextToken());

    int[] sum = new int[n + 1];

    st = new StringTokenizer(br.readLine());
    for(int i = 1; i < n + 1; i++) {
      sum[i] = sum[i - 1] + Integer.parseInt(st.nextToken());
    }

    while(m-- > 0) {
      st = new StringTokenizer(br.readLine());

      int s = Integer.parseInt(st.nextToken());
      int e = Integer.parseInt(st.nextToken());
      
      sb.append(sum[e] - sum[s - 1] + "\n");
    }

    System.out.println(sb.toString());
  }

}
