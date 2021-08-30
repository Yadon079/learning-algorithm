import java.util.Scanner;

public class boj_7568 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] x = new int[n];
        int[] y = new int[n];
        int[] ans = new int[n];
        for(int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j)
                    continue;
                if(x[i] < x[j] && y[i] < y[j])
                    ans[i]++;
            }
        }

        for(int rank : ans) {
            System.out.print((rank+1) + " ");
        }
    }
}
