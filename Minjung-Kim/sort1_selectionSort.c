#include<stdio.h>
#include<stdlib.h>
//선택정렬
//수는 scanf를 통해 입력받는다.
int main(){

int n=0;//입력 받을 배열의 개수
int *arry;//배열
int tmp=0;//swap사용
printf("입력 할 수의 개수");
scanf("%d",&n);

arry=(int*)malloc(sizeof(int)*n);


for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arry[i]>=arry[j])
        {
            tmp=arry[j];
            arry[j]=arry[i];
            arry[i]=tmp;
        }
    }

}

for(int i=0;i<n;i++)
printf("%d ",arry[i]);

    return 0;
}
