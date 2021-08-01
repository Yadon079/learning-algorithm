import java.io.*;

public class boj_11723 {
  
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int m = Integer.parseInt(br.readLine());
    int s = 0;
    StringBuilder sb = new StringBuilder();

    for(int i = 0; i < m; i++) {
      String[] input = br.readLine().split(" ");

      switch(input[0]) {
        case "all":
          s = (1 << 21) - 1;
          break;
        case "empty":
          s = 0;
          break;
        default:
          int x = Integer.parseInt(input[1]);
          switch(input[0]) {
            case "add":
              s |= (1 << x);
              break;
            case "remove":
              s &= ~(1 << x);
              break;
            case "check":
              sb.append((s & (1 << x)) != 0 ? 1 : 0).append('\n');
              break;
            case "toggle":
              s ^= (1 << x);
              break;
          }
      }
    }

    System.out.println(sb);
  }
}