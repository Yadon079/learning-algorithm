#include<stdio.h>
#include<string.h>
static const char base64code_ascii[] =
{
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
	'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
	'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
	'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
	'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
	'w', 'x', 'y', 'z', '0', '1', '2', '3',
	'4', '5', '6', '7', '8', '9', '+', '/' };
// "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

static int DecodeMimeBase64[256] = {
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* 00-0F */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* 10-1F */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63,  /* 20-2F */
	52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1,  /* 30-3F */
	-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,  /* 40-4F */
	15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1,  /* 50-5F */
	-1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,  /* 60-6F */
	41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1,  /* 70-7F */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* 80-8F */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* 90-9F */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* A0-AF */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* B0-BF */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* C0-CF */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* D0-DF */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  /* E0-EF */
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1   /* F0-FF */
};
static int de_table[256] = {0};

static const unsigned char asciicode_base64code[256] =
{
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	// 0x2b +, 0x2f /
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 62, 0xff, 0xff, 0xff, 63,
	// 0x30 : 0,1,2,...
	52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	// 0x40: ＠,A,B,C,...
	0xff, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
	//0x50: P,Q,R,S,...
	15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0xff, 0xff, 0xff, 0xff, 0xff,
	// 0x60 : ｀,a,b,c,...
	0xff, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
	// 0x70 : p,q,r,s,...
	41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
void make_table()
{
	for (int i = 0; i < 256; i++)
		de_table[i] = -1;
	for (int i = 0; i < 64; i++)
	{
		de_table[base64code_ascii[i]] = i;
	}

}

void decording(char *text, char *out,int size)
{
	char a[4] = {0};
	int k = 0;
	int i = 0;
	int j = 0;
	//printf("%d\n", strlen(text));
	for (i = 0, j = 0; i < size; i++)
	{
		if (text[i] == '=') text[i] == 0;
		else
		a[j++] = asciicode_base64code[text[i]];
		
		if (j == 4 || (i == (size - 1)))
		{

			out[k++] = ((a[0] << 2) | ((a[1] & 0x30)>>4));
			printf("i=%d %c\n", i, out[k - 1]);
			for (int i = 7; i >= 0; --i) { //8자리 숫자까지 나타냄
				int result = out[k - 1] >> i & 1;
				printf("%d", result);
			}
			printf("\n");
			out[k++] = (((a[1] & 0x0f) << 4) | ((a[2] & 0x3c)>>2));
			printf("i=%d %c\n", i, out[k - 1]);
			for (int i = 7; i >= 0; --i) { //8자리 숫자까지 나타냄
				int result = out[k - 1] >> i & 1;
				printf("%d", result);
			}
			printf("\n");
			out[k++] = (((a[2] & 0x03) << 6) | a[3]);
			printf("i=%d %c\n", i, out[k - 1]);
			for (int i = 7; i >= 0; --i) { //8자리 숫자까지 나타냄
				int result = out[k - 1] >> i & 1;
				printf("%d", result);
			}
			printf("\n");
			j = 0;
			a[0] = a[1] = a[2] = a[3] = 0;
		}

	}
	out[i] = '\n';
	printf("%s\n", out);


}
int findlen(char *txt)
{
	int i = 0;
	for (i = 0; txt[i]; i++)
	{

	
	}
	return i;


}

int check(char *text, int size)
{
	for (int j = 0; j < size; j++)
	{
		if (!((32 <= text[j]) && (text[j] <= 126)))
			return 0;
		
	}
	return 1;




}
int main()
{
	//char *text1 = "hello base64 !";
	//char *text = "aGVsbG8gYmFzZTY0ICE=Z29vZGJ5ZSE=";
	char text[1000] = "hello base64 !";
	char output[50] = { 0 };
	char buffer[3] = { 0, 0, 0 };//3byte buffer 3byte짜리문자를 모아서 그걸 6bit씩 4byte로 쪼갬
	char bu2[4] = { 0 }; //여기 6bit씩 쪼개서 넣음
	int size = strlen(text);
	//printf("%d\n", size);
	int o = 0;
	int h;
	int index = 0;
	int j, t;
	char ans = 0;
	make_table();


	while (1)
	{

//		printf("Input mode (E : Encoder, D : Decoder, Q : Quit)\n");
		printf("Input mode (E ,D,Q)\n",0);
		scanf("%c", &ans);//개행때문임 fflush(stdin) 을 사용하거나 (" %c")로앞에띄우고 입력받으면해결됨
		//while ((ans = getchar()) != '\n' &&ans != EOF);
		//ans = getchar();
		//printf("%c\n", ans);
		if (ans == 'E')
		{
			fflush(stdin);
			printf("insert:",0);
			gets(text); //SIZE가 문제


			size=findlen(text);
			if ((size <= 1000)&&check(text,size))
			{
				for (j = 0, t = 0; j < size; j++)
				{

					buffer[t++] = text[j];
					if (t == 3 || j == (size - 1))
					{
						bu2[0] = ((buffer[0] & 0xFC) >> 2);//0b11111100 부분 넣어줌
						//printf("%c", bu2[0]);
						bu2[1] = ((buffer[0] & 0x3) << 4) | ((buffer[1] & 0xF0) >> 4);
						//printf("%c", bu2[1]);
						bu2[2] = ((buffer[1] & 0xF) << 2) | ((buffer[2] & 0xC0) >> 6);
						//printf("%c\n", bu2[2]);
						bu2[3] = (buffer[2] & 0x3F);
						//printf("%c\n", bu2[3]);

						for (h = 0; h < 4; h++)
						{
							if (bu2[h] == 0)
							{
								output[index++] = '=';
							}
							else
							{
								output[index++] = base64code_ascii[bu2[h]];
								//	printf("%c\n",base64code_ascii[bu2[h]]);
							}
							//	printf("%c",output[index-1]);
						}


						t = 0;
						//	o = 0;
						buffer[0] = 0;
						buffer[1] = 0;
						buffer[2] = 0;
						bu2[0] = bu2[1] = bu2[2] = 0;
						//printf("in\n");

					}


				}
				output[index] = '\n';
				printf("ANSER: %s\n", output);
				//strset(output, 0);
				index = 0;
			}
			else if(size>1000) printf("size가 1000을 넘었습니다\n");
			else if (check(text, size) == 0) printf("입력 가능 문자 범위가 아닙니다\n");
		}
		else if (ans == 'D')
		{
			fflush(stdin);
			printf("insert:",0);
			gets(text);
			if (findlen(text)<=1000)
			decording(text, output,findlen(text));
			else printf("size가 1000을 넘었습니다 \n");
		}
		else if (ans == 'Q') break;
		
		ans = 0;
		fflush(stdin);
		strset(output, 0);
		strset(text, 0);
	}
	//printf("start\n");
	//decording(text, output);
	//3byte 문자 buffer로 옮겨담기
	/*printf("%c\n", (text[0] & 0xFC) >> 2);
	for (j = 0, t = 0; j < size; j++)
	{

		buffer[t++] = text[j];
		if (t == 3 || j == (size - 1))
		{
			bu2[0] = ((buffer[0] & 0xFC) >> 2);//0b11111100 부분 넣어줌
			printf("%c", bu2[0]);
			bu2[1] = ((buffer[0] & 0x3) << 4) | ((buffer[1] & 0xF0) >> 4);
			printf("%c", bu2[1]);
			bu2[2] = ((buffer[1] & 0xF) << 2) | ((buffer[2] & 0xC0) >> 6);
			printf("%c\n", bu2[2]);
			bu2[3] = (buffer[2] & 0x3F);
			printf("%c\n", bu2[3]);
			/*{---------------------------------------------------mymistake
			bu2[0] = ((text[0] &0xFC) >> 2);//0b11111100 부분 넣어줌
			printf("%c\n", bu2[0]);
			bu2[1] = (((text[0] &0x3) << 4) | ((text[1] & 0xf0)>>4));
			printf("%c\n", bu2[1]);
			bu2[2] = (((text[1] &0xf)<< 2) | ((text[2]&0xc0)>>6));
			printf("%c\n", bu2[2]);
			bu2[3] = (text[3] & 0x3f); //o==4일때 넣어야함
			printf("%c\n", bu2[3]);
			//비트연산 바꾸니까됨 무슨 차인지 모르곘음..
			//o = 0;//0초기화
			}*-----------------------------/
	/*
			for (h = 0; h < 4; h++)
			{
				if (bu2[h] == 0)
				{
					output[index++] = '=';
				}
				else
				{
					output[index++] = base64code_ascii[bu2[h]];
					//	printf("%c\n",base64code_ascii[bu2[h]]);
				}
				//	printf("%c",output[index-1]);
			}


			t = 0;
			//	o = 0;
			buffer[0] = 0;
			buffer[1] = 0;
			buffer[2] = 0;
			bu2[0] = bu2[1] = bu2[2] = 0;
			//printf("in\n");

		}


	}
	output[index] = NULL;
//	int m;
	//	for(m=0; m<index;m++)
	//	printf("%c",output[m]);
	printf("%s", output);
	*/
	//decording(text, output);
	return 0;
}