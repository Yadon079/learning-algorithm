#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ch(char **str,int n,int findn)
{
	if ('A' <= str[findn] && str[findn] <= 'Z')
		return 1;
	else if ('0' <= str[findn] && str[findn] < '9')
		return 2;
	else if ('a' <= str[findn] && str[findn] <= 'z')
		return 3;
	else if (' ' == str[findn])
		return 4;


}


void quick(char **str, int st, int end)
{
	int key = st;
	int L = st + 1;
	int R = end;
	int temp;
	if (st >= end)return 0;
	


	while (key < R)
	{
		while (1)//대문자/숫/소/띄 구분
		{



		}

	}


}
int main()
{
	char *str[4];	
	char buffer[1024];
	int n = 0;//개수입력
	
	scanf("%d", &n);
	for (int p = 0; p < n; p++)
	{
		scanf("%s", buffer);
		char * newbuffer = (char *)malloc(sizeof(char)*((strlen(buffer) + 1)));
		strcpy(newbuffer, buffer);
		str[p] = newbuffer;



	}
//	str = (char*)malloc(sizeof(char*)*n);
	//str = (char*)malloc(sizeof(char)*n);
	/*for (int i = 0; i < n; i++) {
		str[i] = (char*)malloc(sizeof(char) * 1024);
		scanf("%s", str[i]);
	}*/

/*	for (int o = 0; o < n; o++)
	{
	//	printf("%d ",ch(str, n - 1, o));
		printf("%s", str[o]);


	}*/
	//quick(**str, 0, n - 1);
	for (int i = 0; i < n; i++) free(str[i]);


	free(str);


	return 0;
}