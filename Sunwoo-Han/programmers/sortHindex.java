import java.util.*;

public class sortHindex {

  public int solution1(int[] citations) {
    int answer = 0;
    int n = citations.length;

    Arrays.sort(citations);

    for(int i = 0; i < n; i++) {
      int h = n - i;

      if(citations[i] >= h) {
        answer = h;
        break;
      }
    }

    return answer;
  }

  public int solution2(int[] citations) {
    Arrays.sort(citations);

    int max = 0;

    for(int i = citations.length - 1; i > -1; i--) {
      int min = (int) Math.min(citations[i], citations.length - i);
      
      if (max < min) {
        max = min;
      } 
    }

    return max;
  }
}
