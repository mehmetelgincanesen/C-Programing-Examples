#include <stdio.h>
#include <math.h>
int km,hiz;
float saat,dakika1,kalandakika;
int main()
{
	printf("hizi giriniz:\n");
	scanf("%d",&hiz);
	printf("km yi giriniz:\n");
	scanf("%d",&km);
	saat=km/hiz;
	dakika1=saat*60;
	kalandakika=saat%60;
	printf("kalan sure %f saat, %f dakika.",saat,kalandakika);
	
}
