import java.util.*;

public class boj_1620 {

  public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    int m = sc.nextInt();
    int n = sc.nextInt();

    HashMap<String, String> hm = new HashMap<>();

    for(int i = 0; i < m; i++) {
      String pokemon = sc.next();
      String num = Integer.toString(i + 1);

      hm.put(pokemon, num);
      hm.put(num, pokemon);
    }

    StringBuilder sb = new StringBuilder(n);

    for(int i = 0; i < n; i++) {
      sb.append(hm.get(sc.next()) + "\n");  
    }

    System.out.println(sb);

    sc.close();
  }

}