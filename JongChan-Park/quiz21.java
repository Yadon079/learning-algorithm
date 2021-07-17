// 10814 나이순 정렬
// https://www.acmicpc.net/problem/10814
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    int N = Integer.parseInt(br.readLine());
    String[][] users = new String[N][2];

    for(int i = 0; i < N; i++) {
      String[] user = br.readLine().split(" ");

      users[i][0] = user[0]; // 나이
      users[i][1] = user[1]; // 이름
    }

    Arrays.sort(users, new Comparator<String[]>() {
      @Override
      public int compare(String[] o1, String[] o2) {
        System.out.println(o1[0] + " : " + o2[0]);
        return Integer.compare(Integer.parseInt(o1[0]), Integer.parseInt(o2[0]));
      }
    });

    for(int i = 0; i < N; i++) {
      bw.write(users[i][0] + " " + users[i][1] + "\n");
    }

    

    bw.write("\n");
    bw.flush();
    br.close();
    bw.close();
  }
}