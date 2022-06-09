#include <stdio.h>
int a,b,c,d,e;
float aritmetik;
int main()
{
	printf("bes tane sayi giriniz...\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	aritmetik=(a+b+c+d+e)/5.0;
	printf("aritmetik ortalama= %f", aritmetik);
    return 0 ;
}


