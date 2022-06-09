#include <stdio.h>
int a,b,c;
main()
{
	printf("1. degeri giriniz...\n");
	scanf("%d", &a);
	printf("ikinci degeri giriniz...\n");
	scanf("%d", &b);
	printf("ucuncu degeri giriniz...\n");
	scanf("%d", &c);
	if((a>b)&&(a>c)){
		printf("a en buyuk sayi...\n");
	}
	else if((b>a&&(b>c))){
		printf("b en buyuk sayi...\n");
		
	}
	else if((c>a)&&(c>b)){
		printf("c en buyuk sayi...\n");
	}
}
