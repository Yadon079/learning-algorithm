// 1874 스택 수열
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Scanner;
import java.util.Stack;
import java.util.StringTokenizer;


public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    Stack<Integer> stack = new Stack<>();
    int time = Integer.parseInt(br.readLine());
    
    int limitNum = 0;

    while(time-- > 0) {
      int targetNum = Integer.parseInt(br.readLine());

      // limitNum이 targetNum 미만 일 때
      if(targetNum > limitNum) {
        //  limitNum + 1 부터 시작해 targetNum까지 반복한다
        //    targetNum은 결국 pop을 하기 때문에 
        for(int i = limitNum + 1; i <= targetNum; i++) {
          stack.push(i);
          bw.write("+\n");
          bw.flush();
        }

        limitNum = targetNum;
      } else if(stack.peek() != targetNum) {
        bw.write("NO\n");
        bw.flush();
        return;
      }

      stack.pop();

      bw.write("-\n");
      bw.flush();
    }
    
    
    br.close();
    bw.close();
  }
}