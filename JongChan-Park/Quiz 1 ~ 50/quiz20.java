// 2798 블랙잭
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    String[] input = br.readLine().split(" ");
    String[] cards = br.readLine().split(" ");
  
    int N = Integer.parseInt(input[0]);
    int limit = Integer.parseInt(input[1]);
    int topScore = 0;
    int[] intCards = new int[N];

    for(int i = 0; i < N; i++) {
      intCards[i] = Integer.parseInt(cards[i]);
    }

    for(int i = 0; i < N - 2; i++) {
      for(int j = i + 1; j < N - 1; j++) {
        for(int k = j + 1; k < N; k++) {
          int sum = intCards[i] + intCards[j] + intCards[k];

          if(sum == limit) {
            topScore = sum;
            break;
          }

          if(topScore < sum && sum < limit) {
            topScore = sum;
          }
        }
      }
    }    

    bw.write(topScore + "\n");
    bw.flush();
    br.close();
    bw.close();
  }
}