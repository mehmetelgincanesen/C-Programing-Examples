#include<stdio.h>
int main ()
{
	int vize1,vize2,final;
	float ortalama;
	printf("B�rinci vizeyi girin:\n");
	scanf("%d",&vize1);
	printf("�kinci vizeyi girin:\n");
	scanf("%d",&vize2);
	printf("final vizeyi girin:\n");
	scanf("%d",&final);
	ortalama=(((vize1+vize2)/2)*0.4)+(final*0.6);
	printf("ortalama=%f\n",ortalama);
	if(ortalama>=50){
		printf("gectiniz");
	}
	else
	printf("kald�n�z");
}
