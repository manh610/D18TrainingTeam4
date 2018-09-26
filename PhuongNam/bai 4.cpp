# include<stdio.h>
int main()
{
	int x;
	const pi=3.14;
	printf("nhap ban kinh duong tron x=");
	scanf("%d",&x);
	printf("dien tich phan to dam can tinh =%.3f",pi*x*x-2*x*x);
	return 0;
}
