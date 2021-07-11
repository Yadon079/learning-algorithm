// 1436 영화감독 숌
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;


public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    int value = Integer.parseInt(br.readLine());
    int num = 666;
    int cnt = 1;

    // 666이라는 숫자가 나올때까지 반복
    while(cnt != value) {
      num++;

      if(String.valueOf(num).contains("666")) {
        cnt++;
      }
    }


    bw.write(num + "\n");
    
    br.close();
    bw.flush();
    bw.close();
  }
}