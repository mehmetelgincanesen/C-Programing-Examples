#include<stdio.h>
int sayi;
int a,b,c;
int main(){
	printf("sayiyi giriniz:%d",sayi);
	scanf("%d",&sayi);
	if (sayi%a==0 && sayi%b==0 && sayi%c==0){
		
		if(sayi=a*b*c){
		printf("tebrikler mukkemel sayiyi buldunuz.");
		
	}
	}
	else{
		printf("tekrar deneyiniz");
	}
	return 0;
}
