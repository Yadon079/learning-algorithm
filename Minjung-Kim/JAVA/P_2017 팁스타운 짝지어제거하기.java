class Solution
{
    public int solution(String s)
    {
        int answer = 0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s.charAt(i)==s.charAt(i+1))
            {   
                s=s.substring(0, i) + s.substring(i + 2);
                i=-1;
            }
            
        }
        if(s.length()==0) return 1;
        else return 0;
       
    }
}