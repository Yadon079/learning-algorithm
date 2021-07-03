import java.util.*;

public class sortBiggestNum {

  public String solution(int[] numbers) {
    String answer = "";
    String[] result = new String[numbers.length];

    for (int i = 0; i < numbers.length; i++) {
      result[i] = String.valueOf(numbers[i]);
    }

    Arrays.sort(result, (o1, o2) -> (o2 + o1).compareTo(o1 + o2));

    if (result[0].equals("0")) {
      return "0";
    }

    for (String a : result) {
      answer += a;
    }

    return answer;
  }

  public String solution2(int[] numbers) {
    String answer = "";

    List<Integer> list = new ArrayList<>();

    for(int i = 0; i < numbers.length; i++) {
      list.add(numbers[i]);
    }

    Collections.sort(list, (a, b) -> {
      String as = String.valueOf(a), bs = String.valueOf(b);
      return -Integer.compare(Integer.parseInt(as + bs), Integer.parseInt(bs + as));
    });

    StringBuilder sb = new StringBuilder();

    for(Integer i : list) {
      sb.append(i);
    }

    answer = sb.toString();

    return answer.charAt(0) == '0' ? "0" : answer;
  }
}