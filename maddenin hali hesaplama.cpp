#include<stdio.h>
int i;
int toplam=0;
int sayi;
int x;

int main(){
	scanf("%d",&x);
	for(i=0;i<x;i++){
	printf("sayiyi giriniz: (cikmak icin -1 e basýnýz. )");
	scanf("%d", &sayi);
	if(sayi==-1){
		break;
	}
	toplam=sayi+toplam;
	}
	printf("%d",toplam);
}

