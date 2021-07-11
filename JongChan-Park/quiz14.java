// 1920 수 찾기
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int[] nNums = new int[N];

    for(int i = 0; i < N; i++) {
      nNums[i] = sc.nextInt();
    }

    int A = sc.nextInt();
    int[] result = new int[A];
    int[] aNums = new int[A];

    for(int i = 0; i < A; i++) {
      aNums[i] = sc.nextInt();
    }

    for(int i = 0; i < A; i++) {
      for(int j = 0; j < N; j++) {
        if(aNums[i] == nNums[j]) {
          result[i] = 1;
          break;
        }
      }
    }

    for(int i = 0; i < result.length; i++) {
      System.out.println(result[i]);
    }


    sc.close();
  }
}