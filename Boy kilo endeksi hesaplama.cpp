#include<stdio.h>
int main(){
	float kilo,boy,vke;
	printf("boyunuzu giriniz(metre cinsinden):\n");
	scanf("%f",&boy);
	printf("kilonuzu giriniz(kilogram cinsinden):\n");
	scanf("%f",&kilo);
	vke=kilo/(boy*boy);
	printf("vke=%f",vke);
	if(vke<=20)
	printf("zayýf");
	
	else if(21<=vke<=25)
	printf("normal");
	
	else if(26<= vke <=30)
	printf("kilolu");
	
	else if( 31<= vke <=39)
	printf("sisman");
	
	else if( 40<=vke)
	printf("þiko patates");
	
}
