class Solution {
    public String solution(int[][] scores) {
        StringBuilder sb = new StringBuilder();
        int max=-1;
        int min=101;
        int res=0;
        int cnt=0;
        for(int i=0;i<scores.length;i++)
        {
            for(int j=0;j<scores[i].length;j++)
            {
               
                 if(max<scores[j][i])
                 {max=scores[j][i];}
                 else if (max==scores[j][i])
                 {cnt=1;}
                 if(min>scores[j][i])
                     min=scores[j][i];
                else if(min==scores[j][i])
                    cnt=2;
                res=res+scores[j][i];
             }
            if((cnt==0&&(max==scores[i][i]||min==scores[i][i]))||(cnt==2&&(max==scores[i][i]))||(cnt==1&&(min==scores[i][i])))
            {
                res=(res-scores[i][i])/(scores.length-1);
            }
            else res=res/scores.length;
     
            if(res>=90) sb.append("A");
            else if(res>=80) sb.append("B");
            else if(res>=70) sb.append("C");
            else if(res>=50) sb.append("D");
            else sb.append("F");
           
            res=0;
            min=101;
            max=-1;
            cnt=0;
            
        }
        String answer = new String(sb);
        return answer;
    }
}