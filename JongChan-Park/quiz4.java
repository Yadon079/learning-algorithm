import java.util.*;

class Solution {
    public int solution(int[] d, int budget) {
        int cnt = 0;
        int sum = 0;
        
        Arrays.sort(d);
        
        for(int num : d) {
            cnt++;
            sum += num;
            
            if(sum > budget) {
                cnt--;
                break;
            }
        }
        
        return cnt;
    }
}