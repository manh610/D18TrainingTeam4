#include <stdio.h>
int main(void)
{
	float x,t,v,z;
	printf("nhap ban kinh duong tron:");
	scanf("%f",&x);
	t=3.14*x*x;
	v=2*x*x;
	z=t-v;
	printf("dien tich phan to dam la:%.2f", z);
	return 0;
	
}

