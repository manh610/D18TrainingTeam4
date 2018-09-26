#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c,x,y,z;
	printf("nhap gia tri dien tich  cua ba mat chung mot dinh :");
	scanf("%f %f %f",&a,&b,&c);
	y=sqrt(a*b/c);
	x=b/y;
	z=c/x;
	printf("tong do dai ba canh lan luot la:%f", x+y+z);
	return 0;
	}
	
	
	
