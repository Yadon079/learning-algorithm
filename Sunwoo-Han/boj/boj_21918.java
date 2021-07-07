import java.util.Scanner;

public class boj_21918 {
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();
    int[] blub = new int[n];

    for(int i = 0; i < n; i++) {
      blub[i] = sc.nextInt();
    }

    while(m > 0) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();

      if(a == 1) {
        blub[b - 1] = c;
      } else if(a == 2) {
        for(int j = b - 1; j < c; j++) {
          blub[j] ^= 1;
        }
      } else if(a == 3) {
        for(int j = b - 1; j < c; j++) {
          blub[j] = 0;
        }
      } else {
        for(int j = b - 1; j < c; j++) {
          blub[j] = 1;
        }
      }

      m--;
    }

    for(int i = 0; i < n; i++) {
      System.out.print(blub[i] + " ");
    }
  }
}
