// 9012 괄호
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;

public class Main {
  public static String checkVPS(String[] PS) {
    int psLen = PS.length;
    Stack<String> stack = new Stack<>();

    for(int i = 0; i < psLen; i++) {
      if(!stack.isEmpty()) {
        // stack top의 값을 가져와서 매칭되는지 확인한다
        if(!stack.peek().equals(PS[i])) { // 괄호 매칭
          // 상반된 괄호 Check ... ) (
          if(stack.peek().equals(")")) {
            stack.push(PS[i]);
          } else {
            stack.pop();
          }
        } else {
          stack.push(PS[i]);
        }
      } else {
        stack.push(PS[i]);
      }
    }

    if(stack.isEmpty()) {
      return "YES";
    }

    return "NO";
  }
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    int N = Integer.parseInt(br.readLine());
    
    for(int i = 0; i < N; i++) {
      String[] PS = br.readLine().split("");

      String result = checkVPS(PS);

      bw.write(result + "\n");
      bw.flush();  
    }
    
    br.close();
    bw.close();
  }
}