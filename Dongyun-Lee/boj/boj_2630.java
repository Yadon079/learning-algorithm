import java.util.Scanner;

public class boj_2630 {

    public static int N, M;
    public static int[] arr;

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        N = in.nextInt();
        M = in.nextInt();
        arr = new int[M];

        dfs(1, 0);

    }

    public static void dfs(int at, int num) {

        if (num == M) {
            for (int val : arr) {
                System.out.print(val + " ");
            }
            System.out.println();
            return;
        }

        for (int i = at; i <= N; i++) {
            arr[num] = i;
            dfs(i, num + 1);
        }

    }
}
