import java.util.Scanner;

public class boj_2941 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String croatia = sc.nextLine().trim();
        sc.close();
        String[] arr = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
        int result = 0;

        for (int i = 0; i < arr.length; i++) {
            if (croatia.contains(arr[i])) {
                croatia = croatia.replaceAll(arr[i], " ");
            }
        }
        System.out.println(croatia.length());
    }


}
