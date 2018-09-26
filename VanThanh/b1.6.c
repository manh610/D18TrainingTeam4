#include<stdio.h>
int main()
{
	int x;
	const int nam = 2018;
	printf("Nhap nam sinh:\n");
	scanf("%d",&x);
	printf("tuoi cua ban la: %d",nam-x);
	return 0;
}

