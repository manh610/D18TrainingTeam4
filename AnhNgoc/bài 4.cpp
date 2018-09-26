#include <stdio.h>
#include <math.h>
int main() {
	float x, S;
	scanf("%f", &x);
	S=M_PI*x*x-2*x*x ;
	printf("%.9f", S);
	return 0;
}
