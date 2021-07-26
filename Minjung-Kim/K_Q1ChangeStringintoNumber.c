#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
   
    int ch=0;
    char sh[1024]="";
	 for(int i=0; i<strlen(s);i++)
		{
			
        if(s[i]>='a'&&s[i]<='z')
        {  
            if(s[i]=='z')
            {
                i+=3; 
                strcat(sh,"0");
               
            }
            else if(s[i]=='t'&&s[i+1]=='w')
            {
                i+=2;
               strcat(sh,"2");
            }
            else if(s[i]=='t'&&s[i+1]=='h')
            {
                i+=4;
               strcat(sh,"3");
            }
            else if(s[i]=='f'&&s[i+1]=='o')
            {
                i+=3;
             strcat(sh,"4");
            }
            else if(s[i]=='f'&&s[i+1]=='i')
            {
                i+=3;
               strcat(sh,"5");
            }
            else if(s[i]=='s'&&s[i+1]=='i')
            {
                i+=2;
               strcat(sh,"6");
            }
            else if(s[i]=='s'&&s[i+1]=='e')
            {
                i+=4;
              strcat(sh,"7");
            }
            else if(s[i]=='e')
            {
                i+=4;
                strcat(sh,"8");
            }
            else if(s[i]=='n')
            {
                i+=3;
               strcat(sh,"9");
            }
          else if(s[i]=='o')
            {
                i+=2;
                strcat(sh,"1");
            }

        }
         else
         {
             strncat(sh,&s[i],1);
         }
     }
                

    ch=atoi(sh);
    return ch;
}
int main()
{
   const char* s;
    scanf("%s",&s);
    solution(s);
    
    return 0;
}