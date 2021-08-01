import java.io.*;
import java.util.*;

public class boj_18870 {
  
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringBuilder sb = new StringBuilder();

    int n = Integer.parseInt(br.readLine());

    String[] str = br.readLine().split(" ");
    
    int[] num = new int[n];

    for(int i = 0; i < n; i++) {
      num[i] = Integer.parseInt(str[i]);
    }

    int[] sNum = num.clone();
    Arrays.sort(sNum);

    HashMap<Integer, Integer> hm = new HashMap<>();
    int idx = 0;

    for(int i : sNum) {
      if(!hm.containsKey(i)) {
        hm.put(i, idx++);
      }
    }

    for(int i : num) {
      sb.append(hm.get(i)).append(' ');
    }

    System.out.println(sb.toString());
  }

}
