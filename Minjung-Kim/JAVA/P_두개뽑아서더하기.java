import java.util.TreeSet;
import java.util.Set;


class Solution {
 
    public int[] solution(int[] numbers) {
        int cnt=0;

        TreeSet<Integer> set = new TreeSet<Integer>();
        for(int i=0;i<numbers.length;i++)
         {
             for(int j=i+1;j<numbers.length;j++)
             {              
                  set.add(numbers[j]+numbers[i]);
             }
         }

           int[] answer1 = new int[set.size()];
             cnt= 0;
             for (Integer val : set) 
                 answer1[cnt++] = val;
        return answer1;

    }
}