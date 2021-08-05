class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer = {0,0};
        int cnt=0;
        int zero=0;
        for(int i=0;i<lottos.length;i++)
        {   
            if(lottos[i]==0)
                zero++;
            
            for(int j=0; j<win_nums.length;j++)
            {
            if(lottos[i]==win_nums[j])
                cnt++;
            }
        
        }
        answer[0]=(zero==0&&cnt==0)?6:6-cnt-zero+1;
        answer[1]=(zero==0&&cnt==0)?6:(zero==6)?6:6-cnt+1;
        return answer;
    }
}