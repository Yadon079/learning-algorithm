// 1453 피시방 알바
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashMap;

public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    int testCase = Integer.parseInt(br.readLine());
    int failure = 0;
    String[] computer = br.readLine().split(" ");

    HashMap<Integer, Boolean> hm = new HashMap<>();

    for(int i = 0; i < computer.length; i++) {
      int v = Integer.parseInt(computer[i]);

      if(hm.getOrDefault(v, false)) {
        failure++;
      } else {
        hm.put(v, true);
      }
    }


    bw.write(failure + "\n");
    bw.flush();
    
    br.close();
    bw.close();
  }
}