#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	double x,y,z;
	scanf("%d%d%d", &a, &b, &c);
	 x=sqrt(a*c/b);
	 y=a/x;
	 z=c/x;
	printf("Tong 3 canh: %.2f", x+y+z);
return 0;
}	
