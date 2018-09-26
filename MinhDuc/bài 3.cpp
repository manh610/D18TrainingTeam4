#include <stdio.h>

#define PI 3.14159

int main() {
	int r; 
	float chuvi , dientich;
	printf ("Ban kinh r la : ");
	scanf ( "%d",&r);
	chuvi = 2*PI*r;
	dientich = PI*r*r;
	printf("Chu vi hinh tron la : %f\n", chuvi);
	printf("Dien tich hinh tron la : %f", dientich);
	return 0 ;
	
}
