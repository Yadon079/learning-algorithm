// 2675 문자열 반복
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int time = sc.nextInt();
    String result = "";

    for(int i = 0; i < time; i++) {
      int cnt = sc.nextInt();
      String str = sc.next();
      int strLength = str.length();

      for(int j = 0; j < strLength; j++) {
        char target = str.charAt(j);
        for(int k = 0; k < cnt; k++) {
          System.out.print(target);
        }
      }

      System.out.println();
    }

    sc.close();
  }
}