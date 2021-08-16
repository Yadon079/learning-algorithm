import java.util.Scanner;

public class boj_2577 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        sc.close();

        int[] counts = new int[10];
        int num = A * B * C;
        while (num > 0) {
            counts[num % 10]++;
            num /= 10;
        }

        for (int i = 0; i < counts.length; ++i) {
            System.out.println(counts[i]);
        }
    }
}
