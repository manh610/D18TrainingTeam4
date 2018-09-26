#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int Namnay, Namsinh, tuoihientai;
	printf("Nhap nam hien tai: " );
	scanf("%d", &Namnay);
	printf("Nhap nam sinh cua ban: ");
	scanf("%d", &Namsinh);
	tuoihientai=Namnay-Namsinh;
	printf("Tuoi hien tai cua ban la: %d\n", tuoihientai);
	return 0;
}
