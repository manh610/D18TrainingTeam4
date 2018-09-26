#include <stdio.h>
int main(void)
{
	float r,c,s;
	printf("nhap ban kinh duong tron:");
	scanf("%f",&r);
	c=2*3.14*r;
	s=3.14*r*r;
	printf("chu vi hinh tron la:%.2f\n",c);
	printf("dien tich hinh tron la:%.2f", s);
	return 0;
}

