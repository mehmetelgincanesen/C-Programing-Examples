#include<stdio.h>
int sayi;
int i;
int sum=0;

int main(){
	printf("sayiyi giriniz:\n");
	scanf("%d", &sayi);
	for(i=1;i<sayi;i++){
	if(sayi%i==0){
	sum= sum+i;
	}
	}
	if(sum==sayi){
		printf("mukkemel sayiyi buldunuz!");
		
	}
	else{
		printf("tekrar deneyiniz!");
	}
	
}
