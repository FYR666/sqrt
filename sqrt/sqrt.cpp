#include<stdio.h>
#include<math.h>
int main()
{
	double a, b;
	printf("请输入一个正数：");
	scanf_s("%lf", &a);
	b = sqrt(a);
	printf("b=%.4lf", b);
	return 0;
}
