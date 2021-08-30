import java.util.Arrays;
import java.util.Scanner;

public class boj_11650 {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int N = in.nextInt();

        int[][] arr = new int[N][2];

        for (int i = 0; i < N; i++) {
            arr[i][0] = in.nextInt();
            arr[i][1] = in.nextInt();
        }

        Arrays.sort(arr, (x, y) -> {
            if (x[0] == y[0]) {
                return x[1] - y[1];
            } else {
                return x[0] - y[0];
            }
        });

        for (int i = 0; i < N; i++) {
            System.out.println(arr[i][0] + " " + arr[i][1]);
        }
    }
}
