import java.io.IOException;
import java.util.Scanner;

public class boj_2708 {
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        int ra = (a/100) + ((a%100) / 10) * 10 + (a%10) *100;
        int rb = (b/100) + ((b%100) / 10) * 10 + (b%10) *100;

        System.out.println(Math.max(ra, rb));
    }
}
