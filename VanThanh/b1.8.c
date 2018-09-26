#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%.4f",(((float)a/7+ pow(a,2)*b - (float)sqrt(abs(a-b))+ pow(b,5))*(2*a+4*b)));
	return 0;
}

