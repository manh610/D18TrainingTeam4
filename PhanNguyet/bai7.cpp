#include <stdio.h>
#include <math.h>
int main() {
int a,b,c,x,max,y,min;
   scanf("%d%d%d",&a,&b,&c);
   x=((a+b)/2)+(abs(a-b)/2);
   max=((x+c)/2)+(abs(x-c)/2);
   y=((a+b)/2)-(abs(a-b)/2);
   min=((y+c)/2)-(abs(y-c)/2);
	printf("So lon nhat: %d\n", max);
	printf("So nho nhat: %d", min);
return 0;
}	 
