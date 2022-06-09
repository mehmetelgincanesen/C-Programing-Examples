#include<stdio.h>
int a,b,c;
int main(){
	c:
	printf("3 tane kenar giriniz ");
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d\n",&c);
	if(((-1)*(a-b))c<(a+b) && ((-1)*(a-c))<b<(a+c)) && ((-1)*(c-b))<a<(c+b)){
		printf("girdiginiz deðerler ucgen olusturdu");
		
	}
	else{
	printf("degerler yanlis bir daha giriniz...");
	goto c:
}
}
