import java.util.ArrayList;
import java.util.Collections;
class Solution {
    public int solution(int[] priorities, int location) {
        int cnt = 0;
      ArrayList<Integer> num = new ArrayList<Integer>(); 

        for (int i : priorities) {
            num.add(i);
        }

        while(num.isEmpty()!=true)
        {    
            if(num.get(0)<Collections.max(num))
            {   if(location==0) location=num.size()-1;
                else location--;
                num.add(num.get(0));  num.remove(0);

            }
            else if(num.get(0)>=Collections.max(num))
            {   cnt++;
                location--;  num.remove(0);
                if(num.get(0)<Collections.max(num)&&location==0)
                {      
                    continue;   
                }
                else if(location==0)
                {   cnt++;
                    break;
                }
                else if(location<0)
                {   break;
                }               
            }

        }

        return cnt;
    }
}