import java.util.Scanner;

public class boj_5525 {

  public static void main(String[] args) throws Exception {    
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();

    char[] ch = sc.next().toCharArray();
    int[] arr = new int[m];
    int ans = 0;

    for(int i = 1; i < m - 1; i++) {
      if(ch[i] == 'O' && ch[i + 1] == 'I') {
        arr[i + 1] = arr[i - 1] + 1;

        if(arr[i + 1] >= n && ch[i - 2 * n + 1] == 'I') {
          ans++;
        }
      }
    }

    System.out.println(ans);
    sc.close();
  }
  
}