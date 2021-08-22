
class Solution {

    public int[] solution(int[] progresses, int[] speeds) {
        int[] answer1 = new int[progresses.length];
        int[] number= new int[progresses.length];
        int per=0;
        int cnt=0;
        for(int i=0;i<progresses.length;i++)
        {
            per=progresses[i];
            while(per<100)
            {
                per=per+speeds[i];
                cnt++;
            }
            number[i]=cnt;
            cnt=0;
        }     
        per=0;
        for(int j=0;j<progresses.length;j++)
        {
            for(int k=j;k<progresses.length;k++)
            { 

                if(number[k]>number[j])
                {
                    break;}
               cnt++;
            }
            answer1[per++]=cnt;            
            j=j+cnt-1;    
            cnt=0; 
        }
        int[] answer= new int[per];
        for(int l=0;l<per;l++)
        {
            answer[l]=answer1[l];
        }


        return answer;
    }
}