class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        int tmp=0;
        for(int i=0;i<commands.length;i++)
        {

            for(int k=commands[i][0];k<commands[i][1];k++)
            {
                for(int o=k+1; o<commands[i][1]; o++)
                {
                    if(array[k]>=array[o])
                    {
                        tmp=array[o];
                        array[o]=array[k];
                        array[k]=tmp;
                    }
                }
            }
            System.out.println(commands[i][0]-2+commands[i][2]);
            answer[i]=array[commands[i][0]-2+commands[i][2]];
        }
        return answer;
    }
}