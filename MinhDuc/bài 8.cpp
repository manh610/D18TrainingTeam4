#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b;
	float T;
	printf ("nhap 2 so nguyen a b :");
	scanf ("%d %d",&a,&b);
	T=(((float)a/7)+a*a*b-sqrt(abs((float)a-b)) +b*b*b*b*b)*(2*a+4*b);
	printf ("%f",T);
	return 0;
	
}
