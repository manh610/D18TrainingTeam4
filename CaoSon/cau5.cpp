#include <stdio.h>
#include <math.h>
int main(void)

{
	float a,b,c,x,y,z;
	printf("nhap lan luot tung dien tich cua 3 mat chung 1 dinh:");
	scanf("%f %f %f",&a,&b,&c);
	y=sqrt(a*b/c);
	x=b/y;
	z=c/x;
	printf("do dai cua cac canh hinh hop chu nhat lan luot la:%.2f %.2f %.2f",x,y,z);
	return 0;
	
}

