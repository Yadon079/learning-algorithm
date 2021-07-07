// 음계
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    String nums = sc.nextLine();
    String[] splitNums = nums.split(" ");

    String result = "";

    // 배열의 값을 Int로
    for(int i = 0; i < splitNums.length; i++) {
      if(i == splitNums.length - 1) {
        break;
      }
      
      if(Integer.parseInt(splitNums[i]) - Integer.parseInt(splitNums[i + 1]) == 1) {
        result = "descending";
      } else if (Integer.parseInt(splitNums[i]) - Integer.parseInt(splitNums[i + 1]) == -1) {
        result = "ascending";
      } else {
        result = "mixed";
        break;
      }
    }

    System.out.println(result);

    sc.close();
  }
}