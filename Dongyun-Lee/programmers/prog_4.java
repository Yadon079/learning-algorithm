public class prog_4 {

  public String solution(int[] numbers, String hand) {
    StringBuffer answer = new StringBuffer("");

    int left = 10, right = 12;
    int l_index=0, r_index=0;

    for (int i = 0; i < numbers.length; i++) {

      if (numbers[i] == 0) numbers[i] = 11;
     
      if (numbers[i] % 3 == 1) {
        answer.append("L");
        left = numbers[i];
      } else if (numbers[i] % 3 == 0 && numbers[i] != 0) {
        answer.append("R");
        right = numbers[i];
      } else {

                     
        l_index = (Math.abs(numbers[i] - left))/3 + (Math.abs(numbers[i] - left))%3;
        r_index = (Math.abs(numbers[i] - right))/3 + (Math.abs(numbers[i] - right))%3;

        if (l_index == r_index) {

          if(hand.equals("left")) {
            answer.append("L");
            left = numbers[i];
          } else {
            answer.append("R");
            right = numbers[i];
          }
          
        } else if (r_index < l_index) {
          answer.append("R");
          right = numbers[i];
        } else {

          answer.append("L");
          left = numbers[i];
        }
      }
    }

    return answer.toString();
  }
}
