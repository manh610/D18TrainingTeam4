#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main (){
	int r;
	float chuvi ,dientich;
	printf("nhap ban kinh r:");
	scanf("%d", &r);
	chuvi= 2*PI*r;
	dientich= PI*r*r;
	printf("chu vi hinh tron la:%f\n",chuvi);
	printf("dien tich hinh tron la:%f", dientich);
	}
