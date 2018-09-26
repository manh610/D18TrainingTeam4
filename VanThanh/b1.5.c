#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c;
	long long x;
	scanf("%d%d%d",&a,&b,&c);
	x=sqrt(a*b*c);
	printf("%d",x/a + x/b + x/c);	
	return 0;
}	

