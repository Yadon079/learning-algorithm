#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*

1. 0~1,000,000까지의 양의 정수를 입력 받아, 입력받은 수까지 숫자에 8의 개수는 몇 개인지 화면에 출력하시오
ex)Input Data (q:Quit) : 88
Count of Special Number : 18
주의사항 : 0~1,000,000 이외의 문자는 예외처리 할 것.소스 작성 후에 문서를 통해 설명할 것.

*/


int main()
{


	int num; //입력받을정수
	char *s; //정수를 문자열로 변환한것 저장할곳
	int ch = 0; //8의 갯수측정

	printf("Input Data (q:Quit):");
	scanf_s("%d", &num);

	if (num >= 0 && num <= 1000000) //입력받은 정수가 0~1000,000의 범위를 가지고 있을때
	{

		for (int j = num; j >=0; j--) // num을 입력 된 값부터 차례대로 --시키기 num부터 시작해서 0까지 1씩 감소
		{

			s = malloc(1024 * sizeof(char));

			_itoa(num, s, 10);

			s = realloc(s, strlen(s) + 1);
		
			int len = strlen(s), i;
		
			printf("%d\n", num);

			for (i = 0; i < len; i++) //그문자열에서 '8'이 있는지 찾는고
			{
				if (s[i] == '8')
				{
					printf("8나옴~~~\n");
					ch++;

				}

			}
			num--;

		}
	}
	else// 0~1000000 아닐 경우의 예외 처리
		printf("error\n");
	
	printf("8의 갯수는 : %d\n", ch);
	
	free(s);

	return 0;






}