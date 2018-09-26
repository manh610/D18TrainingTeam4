#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int r;
	float Chuvi , Dientich;
	printf("CHUONG TRINH TINH CHU VI, DIEN TICH HINH TRON \n");
	printf("*******************************************************\n");
	printf("Nhap ban kinh r= ");
	scanf("%d",&r);
	printf("============================================================\n");
	Dientich = 3.14*r*r;
	Chuvi = 2*3.14*r;
	printf("Dien tich hinh tron la: %3f\n", Dientich);
	printf("Chu vi hinh tron la: %3f\n", Chuvi);
	return 0;
}
