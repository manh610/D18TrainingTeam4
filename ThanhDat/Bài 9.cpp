#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
	int n, A;
	printf("TINH GIA TRI BIEU THUC \n");
	printf("===================================== \n");
	printf("Nhap gia tri n=");
	scanf("%d", &n);
	A=n*(n+1)*(2*n+1)/6;
	printf("**************************************** \n");
	printf("Gia tri cua bieu thuc A la: %d \n", A);
	return 0;
}
	
	
