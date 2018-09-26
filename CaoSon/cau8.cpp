#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b;
	float tong;
	printf("nhap vao 2 gia tri a,b lan luot:");
	scanf("%d%d",&a,&b);
	tong=((((float)a/7)+(a*a*b) - sqrt(abs((float)a-b) ))+b*b*b*b*b)*(2*a+4*b);
	printf("tong la:%.4f",tong);
	return 0;
}


