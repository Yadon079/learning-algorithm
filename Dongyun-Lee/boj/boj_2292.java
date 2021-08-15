import java.util.Scanner;

public class boj_2292 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int count = 1;
        int range = 1;
        int tmp = 1;

        while(true) {
            if(range >= n) {
                break;
            }
            tmp = 6 * (count++);
            range += tmp;

        }

        System.out.println(count);
    }
}
