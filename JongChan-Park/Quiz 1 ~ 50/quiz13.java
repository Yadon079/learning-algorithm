// 단어 공부
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int[] nums = new int[26];
    char result = '?';
    int max = 0;
    String str = sc.next();

    // A 65 ~ 90, a == 97 ~ 122
    for(int i = 0; i < str.length(); i++) {
      if(str.charAt(i) >= 65 && str.charAt(i) <= 90) {
        nums[str.charAt(i) - 65]++;
      } else {
        nums[str.charAt(i) - 97]++;
      }
    }

    for(int i = 0; i < nums.length; i++) {
      if(max < nums[i]) {
        max = nums[i];
        result = (char)(i + 65);
      } else if (nums[i] == max) {
        result = '?';
      }
    
    }

    System.out.println(result);

    sc.close();
  }
}