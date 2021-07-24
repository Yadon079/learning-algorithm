import java.util.ArrayList;
import java.util.Collections;

public class InsertionSort {
  public static void sort(ArrayList<Integer> list) {
    int length = list.size();

    for(int i = 0; i < length - 1; i++) {
      for(int j = i + 1; j > 0; j--) {
        if(list.get(j) < list.get(j - 1)) {
          Collections.swap(list, j,  j - 1);
        } else {
          break;
        }
      }
    }
  }
  public static void main(String[] args) {
    ArrayList<Integer> list = new ArrayList<>();
    
    for(int i = 0; i < 10; i++) {
      list.add((int)(Math.random() * 100));
    }

    sort(list);

    System.out.println(list.toString());
  }
}
