#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int Namnay, Namsinh, tuoihientai;
	printf("CHUONG TRINH TINH TUOI HIEN TAI \n");
	printf("******************************************** \n" );
	printf("Nhap nam hien tai: " );
	scanf("%d", &Namnay);
	printf("Nhap nam sinh cua ban: ");
	scanf("%d", &Namsinh);
	tuoihientai=Namnay-Namsinh;
	printf("================================================ \n");
	printf("Tuoi hien tai cua ban la: %d\n", tuoihientai);
	return 0;
}
	
