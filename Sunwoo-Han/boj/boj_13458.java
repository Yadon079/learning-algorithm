import java.io.*;
import java.util.*;

public class boj_13458 {

  static int[] arr;
  static int n, B, C;
  
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    n = Integer.parseInt(br.readLine());
    arr = new int[n];
    
    StringTokenizer st = new StringTokenizer(br.readLine());

    for(int i = 0; i < n; i++) {
      arr[i] = Integer.parseInt(st.nextToken());
    }

    st = new StringTokenizer(br.readLine());

    B = Integer.parseInt(st.nextToken());
    C = Integer.parseInt(st.nextToken());
    
    System.out.println(solve());
  }

  private static long solve() {
    long result = 0;

    for(int i = 0; i < n; i++) {
      int tmp = arr[i] - B;
      result++;

      if(tmp <= 0) {
        continue;
      }
      
      if (tmp % C == 0) {
        result += tmp / C;
      } else {
        result += tmp / C;
        result++;
      }
    }

    return result;
  }

}
