import java.util.Arrays;
import java.util.Scanner;

public class boj_11399 {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int[] arr = new int[num];

        for(int i=0;i<num;i++){
            arr[i] = sc.nextInt();
        }
        int min=0, sum=0;
        Arrays.sort(arr);

        for(int i=0;i<arr.length;i++){
            min += arr[i];
            sum += min;
        }

        System.out.println(sum);

    }
}



