#include <stdio.h>
#include <math.h>
/*
ax^2+bx+c denkleminin köklerini bulucaz.
*/
int a,b,c;
float x1,x2,delta;
int main()
{
	printf("a yi giriniz;\n");
	scanf("%d",&a);
	printf("b yi giriniz;\n");
	scanf("%d",&b);
	printf("c yi giriniz\n",&c);
	scanf("%d",&c);
	delta=b*b-4*a*c;
	x1=(-b+(sqrt(delta)))/2*a;
	x2=(-b-(sqrt(delta)))/2*a;
	printf("x1=%f, x2=%f",x1,x2);
    return 0;
}

