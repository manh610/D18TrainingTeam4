#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	int n;
	long long tong;
	printf("nhap n:");
	scanf("%d",&n);
	tong=n*(n+1)*(2*n+1)/6;
	printf("gia tri cua bieu thuc la:%lld",tong);
	return 0;
}


