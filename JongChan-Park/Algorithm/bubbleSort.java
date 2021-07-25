import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;


public class bubbleSort {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    String[] nums = br.readLine().split(" ");
    int numsLen = nums.length;
    ArrayList<Integer> arr = new ArrayList<>();

    for(int i = 0; i < numsLen; i++) {
      arr.add(Integer.parseInt(nums[i]));
    }

    for(int i = 0; i < numsLen - 1; i++) {
      boolean swap = false;

      for(int j = 0; j < numsLen - 1 - i; j++) {
        if(arr.get(j) > arr.get(j + 1)) {
          Collections.swap(arr, j, j + 1);

          swap = true;
        }
      }

      if(!swap) {
        bw.write(i + "\n");
        bw.flush();
        
        break;
      }
    }       
    br.close();
    bw.close();
  }
}
