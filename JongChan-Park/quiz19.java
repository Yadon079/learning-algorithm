// 11720 숫자의 합
// https://www.acmicpc.net/problem/11720
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    int testCase = Integer.parseInt(br.readLine());
    String[] nums = br.readLine().split("");
    int sum = 0;

    for(int i = 0; i < nums.length; i++) {
      sum += Integer.parseInt(nums[i]);
    }
    
    bw.write(sum + "\n");
    bw.flush();
    
    br.close();
    bw.close();
  }
}