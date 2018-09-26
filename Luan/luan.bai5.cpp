#include <stdio.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float x;
	x=(((b*c)/a)+((a*c)/b)+((c*b)/c));
	printf("%.3f",  4*x);
	return 0;
}
