import java.util.Scanner;

public class boj_1546 {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    int num = sc.nextInt();

    int[] score = new int[num];

    float tmp = 0, avg = 0;

    for (int i = 0; i < num; i++) {

      score[i] = sc.nextInt();
    }

    for (int i = 0; i < num; i++) {

      if (score[i] > tmp) {
        tmp = score[i];
      }
    }

    for (int i = 0; i < num; i++) {
      avg += (score[i] / tmp * 100);

    }

    avg /= num;

    System.out.println(avg);
  }

}
