#include <stdio.h>

#define PI 3.14159

int main (){
	
	int x,Shv;
	
	float Sht,Std;
	
	printf("Ban kinh x la :");
	scanf ( "%d",&x);
	Shv = x*x*2;
	Sht = PI*x*x;
	Std = Sht-Shv;
	printf("Dien tich phan to dam la : %f", Std);
	
	return 0 ;
	
}
