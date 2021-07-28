#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// enroll_len은 배열 enroll의 길이입니다.
// referral_len은 배열 referral의 길이입니다.
// seller_len은 배열 seller의 길이입니다.
// amount_len은 배열 amount의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.

int* solution(const char* enroll[], size_t enroll_len, const char* referral[], size_t referral_len, const char* seller[], size_t seller_len, int amount[], size_t amount_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int ch=0;
    int plus=0;
    int* answer = (int*)malloc(enroll_len*sizeof(int));
memset(answer,0,enroll_len*sizeof(int));

    for(int i=0;i<seller_len;i++)
    {  
        for(int j=0;j<enroll_len;j++)
        {         
            if(strcmp(seller[i],enroll[j])==0)
            {                  
                ch=j;
                break;
            }
        }
       
        answer[ch]= answer[ch]+amount[i]*100*0.9;
        plus=amount[i]*100;
       
        while(strcmp(referral[ch],"-")!=0)
        {       plus= plus*0.1;//10
          //if(ceil(plus*0.9)<1) break;
            for(int k=0; k<enroll_len;k++)
            {
                if(strcmp(enroll[k],referral[ch])==0)
                {
                    ch = k;
                    break;
                }
            }
         //if(strcmp(referral[ch],"-")==0)break;
           //plus = 9원
           if((ceil(plus*0.9))!=(plus*0.9))//소수점자리가있다면
           {    answer[ch]= ceil(plus*0.9)+answer[ch];
                plus--;
           }
            else
                answer[ch]= plus*0.9+answer[ch];
     // if(plus<=0||plus*0.9<1||ceil(plus*0.9)<1)break;
         if(plus==0)break;
        }
    }
   
    return answer;
    
}