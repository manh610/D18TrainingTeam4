#include<stdio.h>
#include<math.h>
int main (void)
{
	int a, b, c;
	long tong3canh;
	printf("CHUONG TRINH TINH TONG CAC CANH HINH HOP CHU NHAT \n");
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
	printf("Nhap ba so a, b, c: ");
	scanf("%d%d%d",&a, &b, &c);
	tong3canh= (sqrt(a*b*c))/a+(sqrt(a*b*c)/b+(sqrt(a*b*c)/c;
	printf("Tong ba canh cua hinh hop chu nhat la: %lld\n", tong3canh);
	return 0;
}
