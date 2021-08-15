import java.util.Scanner;

public class boj_1193 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int count = 0;
        int n = 0;
        while (true) {
            n++;
            count +=n;
            if(count>=a) {
                if(n%2==0) {
                    System.out.println(a-count+n+"/"+(count-a+1));
                }else {
                    System.out.println((count-a+1)+"/"+(a-count+n));
                }
                break;
            }
        }
    }
}
