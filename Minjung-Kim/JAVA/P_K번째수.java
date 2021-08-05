class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        int[] cln;
        int tmp=0;
        for(int i=0;i<commands.length;i++)
        {
            cln= array.clone();
            for(int k=(commands[i][0]-1);k<(commands[i][1]);k++)
            {  System.out.println("k="+k);
                for(int o=k+1; o<(commands[i][1]); o++)
                {   System.out.println("o="+o);
                    if(cln[k]>=cln[o])
                    {
                        tmp=cln[o];
                        cln[o]=cln[k];
                        cln[k]=tmp;
                    }
                }
            }
            for(int j=0;j<cln.length;j++)
            {
                System.out.print(cln[j]);
            }
            System.out.println();
            //System.out.println(cln[commands[i][0]-2+commands[i][2]]);
            answer[i]=cln[commands[i][0]-2+commands[i][2]];
        }
        return answer;
    }
}