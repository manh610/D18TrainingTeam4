#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	float Scantinh;
	printf("CHUONG TRINH TINH DIEN TICH PHAN TO DAM \n");
	printf("*********************************************** \n");
	printf("Nhap ban kinh duong tron x= ");
	scanf("%d", &x);
	Scantinh=3.14*x*x-2*x*x;
	printf("==================================================== \n");
	printf("Dien tich can tinh la: %3f\n", Scantinh);
	return 0;
}
