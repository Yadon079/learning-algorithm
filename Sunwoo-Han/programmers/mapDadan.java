import java.util.*;

class mapDadan {

  public int[] solution1(String[] enroll, String[] referral, String[] seller, int[] amount) {

    int[] answer = new int[enroll.length];

    Map<String, String> parent = new HashMap<>();
    Map<String, Integer> member = new HashMap<>();

    for (int i = 0; i < enroll.length; i++) {
      parent.put(enroll[i], referral[i]);
      member.put(enroll[i], i);
    }

    for (int i = 0; i < seller.length; i++) {
      String now = seller[i];
      int profit = 100 * amount[i];

      while (!now.equals("-")) {
        int profitForParent = profit / 10;
        int nowProfit = profit - profitForParent;

        answer[member.get(now)] += nowProfit;

        now = parent.get(now);
        profit /= 10;

        if (profit < 1) {
          break;
        }
      }
    }

    return answer;
  }

  public int[] solution2(String[] enroll, String[] referral, String[] seller, int[] amount) {
    HashMap<String, Person> personMap = new HashMap<>();
    
    for (String name : enroll) {
      personMap.put(name, new Person(name, null, 0));
    }

    for (int i = 0; i < enroll.length; i++) {
      if (referral[i].equals("-")) {
        continue;
      }
      personMap.get(enroll[i]).parent = personMap.get(referral[i]);
    }

    for (int i = 0; i < seller.length; i++) {
      personMap.get(seller[i]).CalcProfit(amount[i] * 100);
    }

    int[] result = new int[enroll.length];

    for (int i = 0; i < result.length; i++) {
      result[i] = personMap.get(enroll[i]).profit;
    }

    return result;
  }
}

// solution2
class Person {
  String name;
  Person parent;
  int profit;

  public Person(String name, Person parent, int profit) {
    this.name = name;
    this.parent = parent;
    this.profit = profit;
  }

  public void CalcProfit(int profit) {
    int profitToParent = profit / 10;
    this.profit += profit - profitToParent;
    
    if (this.parent != null && profitToParent >= 1) {
      this.parent.CalcProfit(profitToParent);
    }
  }
}