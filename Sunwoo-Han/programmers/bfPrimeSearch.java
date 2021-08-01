import java.util.*;

class bfPrimeSearch {

  public int solution(String numbers) {
    HashSet<Integer> set = new HashSet<>();

    permutation("", numbers, set);

    int cnt = 0;

    while(set.iterator().hasNext()) {
      int a = set.iterator().next();
      set.remove(a);
      
      if(a == 2) {
        cnt++;
      }
        
      if(a % 2 != 0 && isPrime(a)) {
        cnt++;
      }
    }

    return cnt;
  }

  public void permutation(String prefix, String str, HashSet<Integer> set) {
    int n = str.length();

    if(!prefix.equals("")) {
      set.add(Integer.valueOf(prefix));
    }

    for(int i = 0; i < n; i++) {
      permutation(prefix + str.charAt(i), str.substring(0, i) + str.substring(i + 1, n), set);
    }

  }

  public boolean isPrime(int n) {
    if (n == 0 || n == 1) {
      return false;
    }

    for(int i = 3; i <= (int) Math.sqrt(n); i += 2) {
      if(n % i == 0) {
        return false;
      }
    }

    return true;
  }
}