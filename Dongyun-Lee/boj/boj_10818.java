import java.util.Scanner;
import java.util.Arrays;

public class boj_10818 {

  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);

    int num = sc.nextInt();
    int[] array = new int[num];

    for(int i=0;i<num;i++){

      array[i] = sc.nextInt();
    }

    sc.close();
    Arrays.sort(array);
    System.out.println(array[0] + " " + array[num-1]);

  }
  
}
