
class Solution {
    public int[] solution(int[] answers) {
        int[] num1={1,2,3,4,5};
        int[] num2={2,1,2,3,2,4,2,5};
        int[] num3={3,3,1,1,2,2,4,4,5,5};
        int[] cnt= new int[3];
        int cnt1=0,cnt2=0,cnt3=0;
        for(int i=0;i<answers.length;i++)
        {
            if(num1[i%5]==answers[i])
            {cnt[0]++;}
            if(num2[i%8]==answers[i])
            {cnt[1]++;}
            if(num3[i%10]==answers[i])
            {cnt[2]++;}
        }
        if(cnt1==cnt2&&cnt2==cnt3)//모든수가 같을때
        {int[] answer = {1,2,3};}
        else if (cnt1==cnt2&&cnt2>cnt3)
        
       System.out.println(cnt1+";"+cnt2+";"+cnt3);
        return answer;
    }
}