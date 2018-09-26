#include <stdio.h>
#include <math.h>
int main(void)

{
	float a,b,c,x,y,z;
	printf("nhap gia tri a b c:");
	scanf("%f %f %f",&a,&b,&c);
	y=sqrt(a*b/c);
	x=b/y;
	z=c/x;
	printf("Tong do dai cac canh la :%f",4*(x+y+z));
	return 0;
}
