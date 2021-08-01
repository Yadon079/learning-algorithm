import java.util.*;

class prog_3 {
  public String solution(int a, int b) {
    String answer = "";

    int days = -1;
    if (a != 1) {
      for (int i = 1; i < a; i++) {
        if (i < 8) {
          if (i % 2 == 0) {
            if (i == 2) {
              days += 29;
            } else
              days += 30;
          } else
            days += 31;
        } else {
          if (i % 2 == 0) {
            days += 31;
          } else
            days += 30;
        }
      }
    }

    days += b;

    switch (days % 7) {

      case 1:
        answer = "SAT";
        break;
      case 2:
        answer = "SUN";
        break;
      case 3:
        answer = "MON";
        break;
      case 4:
        answer = "TUE";
        break;
      case 5:
        answer = "WED";
        break;
      case 6:
        answer = "THU";
        break;
      default:
        answer = "FRI";
        break;
    }

    return answer;
  }
}