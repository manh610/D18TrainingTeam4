#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	long long x,y;
	scanf("%d%d%d",&a,&b,&c);
	x=sqrt(a*b*c);
	y=x/a+x/b+x/c;
    printf("%lld",y);
	return 0;
}
