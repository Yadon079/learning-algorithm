import java.util.Scanner;

public class boj_1057 {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        int l = sc.nextInt();
        int count=0;

        while(k != l){

            k = k/2 + k%2;
            l = l/2 + l%2;
            count++;
        }

        System.out.println(count);
    }
}
