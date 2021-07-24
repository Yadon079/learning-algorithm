import java.io.*;
import java.util.*;

public class boj_17219 {

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    HashMap<String, String> map = new HashMap<String, String>();
    String[] input = br.readLine().split(" ");

    int n = Integer.parseInt(input[0]);
    int m = Integer.parseInt(input[1]);

    for (int i = 0; i < n; i++) {
      input = br.readLine().split(" ");

      String site = input[0];
      String pwd = input[1];

      map.put(site, pwd);
    }

    for (int i = 0; i < m; i++) {
      String inputSite = br.readLine();

      System.out.println(map.get(inputSite));
    }
  }

}
