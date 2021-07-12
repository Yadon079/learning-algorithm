#include<stdio.h>
#include<math.h>

int floormk(double a)
{	//소수점첫번째자리 반올림하는 함수 만약 두번째면 *10 세번째면 *100임..
	int answer = 0;
	a=a + 0.5;
	answer = (int)a;
	

		return answer;
}
int main() {

	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	double x3 = 0, y3 = 0, x4 = 0, y4 = 0;
	double p1 = 0, p2 = 0;
	//평행하거나 일치하거나

	scanf_s("%lf,%lf,%lf,%lf\n", &x1, &y1, &x2, &y2);
	scanf_s("%lf,%lf,%lf,%lf", &x3, &y3, &x4, &y4);
	if ((1 <= x1) && (x1<=10)&& (1 <= x2) && (x2 <= 10) && (1 <= x3) && (x3 <= 10) && (1 <= x4) && (x4 <= 10) && (1 <= y1) && (y1 <= 10) && (1 <= y2) && (y2 <= 10) && (1 <= y3)&& (y3 <= 10) && (1 <= y4) && (y4 <= 10))
	{

		if (((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4)) == 0)
		{
			printf("직선은 일치하거나 평행합니다.\n");


		}
		else {
			p1 = (
				((x1*y2 - y1 * x2)*(x3 - x4) - (x1 - x2)*(x3*y4 - y3 * x4)) / ((x1 - x2)*(y3 - y4) - (y1 - y2) * (x3 - x4)));
			p2 = (
				((x1*y2 - y1 * x2)*(y3 - y4) - (y1 - y2)*(x3*y4 - y3 * x4)) / ((x1 - x2)*(y3 - y4) - (y1 - y2)* (x3 - x4)));



			printf("교차점은 =%d,%d\n", (int)round(p1), (int)round(p2));
			printf("교차점은 =%d,%d", floormk(p1), floormk(p2));
		}

		
	}
	else printf("입력값이 오류\n");
	return 0;





}