import java.util.Scanner;

public class boj_11729 {
    private static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();


        sb.append((int) Math.pow(2, n) - 1 + "\n");

        cycle(n, 1, 2, 3);

        System.out.println(sb);
    }

    private static void cycle(int n, int one, int two, int three) {

        if (n == 1) {
            sb.append(one + " " + three + "\n");
        } else {


            cycle(n - 1, one, three, two);
            sb.append(one + " " + three + "\n");
            cycle(n - 1, two, one, three);

        }


    }
}
