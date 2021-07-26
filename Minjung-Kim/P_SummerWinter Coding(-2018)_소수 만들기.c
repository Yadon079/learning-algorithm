#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer =0;
    int ch=0;//0은 소수가 아니다 1은 소수다
    int i=1;
    int check=0;
    int  num=0;
    for(int f=0;f<nums_len;f++)
    {
        for(int s=f+1;s<nums_len;s++)
        {
            for(int t=s+1;t<nums_len;t++)
            {
                num=nums[f]+nums[s]+nums[t];
                    for(int i=2;i<num;i++)
                    {
                      if(num%i==0)
                      {
                          ch=1;
                          break;
                      }    
                    }
                if(ch==0)answear++;
                ch=0;
            }
        }
    }
    
    

    
    
    
    return answer;
}