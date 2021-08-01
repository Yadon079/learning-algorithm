import java.util.Scanner;

public class boj_3052 {
  
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);

    int[] arr = new int[10];
    int tmp = 0;
    int count = 0;

    for ( int i = 0; i < 10; i++ ) {
      arr[i] = sc.nextInt() % 42;
    }

    for ( int i = 0; i < 10; i++ ) {
      tmp = 0;
      for ( int k = i+1; k < 10; k++ ) {
        if ( arr[i] == arr[k] ) {
          tmp ++;
        }
      }
      if ( tmp == 0 ) {
        count ++;
      }
    }

    System.out.println(count);
  }
}
