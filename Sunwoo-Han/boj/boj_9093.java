
/* import java.util.Scanner;

public class boj_9093 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int t = Integer.parseInt(sc.nextLine());

    String[] results = new String[t];

    for (int i = 0; i < t; i++) {
      String word = sc.nextLine();
      String[] wordArr = word.split(" ");
      StringBuilder sb = new StringBuilder();

      for (String words : wordArr) {
        for (int j = words.length(); j > 0; j--) {
          sb.append(words.charAt(j - 1));
        }
        sb.append(" ");
      }

      results[i] = sb.toString();
    }

    for (String result : results) {
      System.out.println(result);
    }
  }

}
 */
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;

public class boj_9093 {
  public static void main(String args[]) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    int n = Integer.parseInt(br.readLine());

    while (n-- > 0) {
      Stack<Character> st = new Stack<>();

      String str = br.readLine() + ' ';

      for (char ch : str.toCharArray()) {
        if (ch == '(' || ch == ' ') {
          while (!st.empty()) {
            bw.write(st.pop());
          }

          bw.write(' ');
        } else {
          st.push(ch);
        }
      }

      bw.append('\n');
    }

    bw.flush();
  }
}