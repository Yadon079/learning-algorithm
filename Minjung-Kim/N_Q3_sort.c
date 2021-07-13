#include<stdio.h>
#include<stdlib.h>
int main()
{//짝수일땐 오름차순 홀수일땐 내림차순

	char input[1000];
	
	int ans[10];
	int cnt = 0;
	int tmp = 0;
	int ja[10] = { 0 }; 
	int to[10] = { 0 };
	int res[10] = { 0 };
	fgets(input,1000,stdin);
	char *st=strtok(input," ");
	//printf("%d",atoi(input[0]));
	int i = 0;
	while ((st != NULL))
	{
		if (i >= 10)break;
		ans[i] = atoi(st);
		i++;
		st = strtok(NULL, " ");
	
	
	
	
	}
	if (i >= 10)
	{
		printf("입력개수 초과\n");
	}
	else
	{
		/*for (int j = 0; j < i; j++)
		{
			printf("%d ", ans[j]);
		}*/
		int k = 0,t=0;
		for (int h = 0; h < i; h++)
		{
			if (ans[h] % 2 == 0)//짝수
			{
				ja[k++] = ans[h];
			}
			else to[t++] = ans[h];//홀수

		}
		int tt = 0;
		for (int g = 0; g < k; g++)//짝수정렬
		{
			for (int o = 0; o < k-1; o++)
			{
				if (ja[o] > ja[o+1])
				{
					tt = ja[o];
					ja[o] = ja[o + 1];
					ja[o + 1] = tt;
				}
			}

		}
		for (int g = 0; g < t; g++)//홀수정렬
		{
			for (int o = 0; o < t - 1; o++)
			{
				if (to[o] < to[o + 1])
				{
					tt = to[o];
					to[o] = to[o + 1];
					to[o + 1] = tt;
				}
			}

		}
		for (int y = 0; y < t; y++)
			printf("%d ", to[y]);
		printf("\n");
		for (int f = 0; f < k; f++)
		{
			res[f] = ja[f];
			printf("%d ", res[f]);
		}
		for (int p=0, u = k; u < k + t; u++)
		{
			res[u] = to[p++];
			printf("%d ", res[u]);
		}
		printf("\n");
		for (int y = 0; y < i; y++)
			printf("%d ", res[y]);
	}
	


	return 0;
}