#include <stdio.h>
	int main()
{
	float r,c=0,s=0;
	printf("nhap chu vi duong tron:\n");
	scanf("%f",&r);
	c=r*2*3.14;
	s=r*r*3.14;
	printf("chu vi duong tron la: %.2f\n",c);
	printf("dien tich hinh tron la: %.2f\n",s);
	return 0;
}
