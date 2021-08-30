import java.util.Scanner;

public class boj_10872 {
    static int result = 1;
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();


        int sum = factorial(N);
        System.out.println(sum);

    }

    public static int factorial(int N) {
        if(N <= 1) return result;
        result *= N;
        return factorial(N - 1);
    }
}
