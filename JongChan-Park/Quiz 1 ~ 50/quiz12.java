// OX퀴즈
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int time = sc.nextInt();
    int result = 0;
    int sum = 0;
    
    for(int i = 0; i < time; i++) {
      String ox = sc.next();
      int oxLen = ox.length();
      int score = 0;

      for(int j = 0; j < oxLen; j++) {
        if(ox.charAt(j) == 'O') {
          score += 1;
        } else {
          if(score >= 1) {
            score = 0;
          }
        }

        result += score;
      }

      System.out.println(result);

      result = 0;
    }

    sc.close();
  }
}