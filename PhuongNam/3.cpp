#include <stdio.h>
int main ()
{
	int r;
	const float pi = 3.14;
	printf("Nhap ban kinh hinh tron:");
	scanf("%d",&r);
	printf("chu vi cua hinh tron = %.3f \n", 2*r*pi);
	printf("dien tich cua hinh tron = %.3f", r*r*pi);
	return 0;
}
