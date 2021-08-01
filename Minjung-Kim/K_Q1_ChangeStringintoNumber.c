#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
//2021 카카오 채용연계형 인턴십 숫자 문자열과 영단어
// 네오와 프로도가 숫자놀이를 하고 있습니다. 네오가 프로도에게 숫자를 건넬 때 일부 자릿수를 영단어로 바꾼 카드를 건네주면 프로도는 원래 숫자를 찾는 게임입니다.

// 다음은 숫자의 일부 자릿수를 영단어로 바꾸는 예시입니다.

// 1478 → "one4seveneight"
// 234567 → "23four5six7"
// 10203 → "1zerotwozero3"
// 이렇게 숫자의 일부 자릿수가 영단어로 바뀌어졌거나, 혹은 바뀌지 않고 그대로인 문자열 s가 매개변수로 주어집니다. s가 의미하는 원래 숫자를 return 하도록 solution 함수를 완성해주세요.

// 참고로 각 숫자에 대응되는 영단어는 다음 표와 같습니다.

// 숫자	영단어
// 0	zero
// 1	one
// 2	two
// 3	three
// 4	four
// 5	five
// 6	six
// 7	seven
// 8	eight
// 9	nine
// 제한사항
// 1 ≤ s의 길이 ≤ 50
// s가 "zero" 또는 "0"으로 시작하는 경우는 주어지지 않습니다.
// return 값이 1 이상 2,000,000,000 이하의 정수가 되는 올바른 입력만 s로 주어집니다.
// 입출력 예
// s	result
// "one4seveneight"	1478
// "23four5six7"	234567
// "2three45sixseven"	234567
// "123"	123
// 입출력 예 설명
// 입출력 예 #1

// 문제 예시와 같습니다.
// 입출력 예 #2

// 문제 예시와 같습니다.
// 입출력 예 #3

// "three"는 3, "six"는 6, "seven"은 7에 대응되기 때문에 정답은 입출력 예 #2와 같은 234567이 됩니다.
// 입출력 예 #2와 #3과 같이 같은 정답을 가리키는 문자열이 여러 가지가 나올 수 있습니다.
// 입출력 예 #4

// s에는 영단어로 바뀐 부분이 없습니다.

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