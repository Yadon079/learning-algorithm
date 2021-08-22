import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;


class Solution {
 
    public int[] solution(int[] numbers) {
        int[] answer=new int[1024];
        int cnt=0;
      answer[0]=0;
        for(int i=0;i<numbers.length;i++)
        {
            for(int j=i+1;j<numbers.length;j++)
            {              
                 answer[cnt++]=numbers[j]+numbers[i];
            }
        }
        Set<Integer> set = new HashSet<Integer>();
		for(int i=0;i<cnt;i++)
			set.add(answer[i]);

           int[] answer1 = new int[set.size()];
             cnt= 0;
             for (Integer val : set) 
                 answer1[cnt++] = val;
        return answer1;

    }
}