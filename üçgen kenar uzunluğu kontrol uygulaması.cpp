#include<stdio.h>
int a,b,c;
int main(){
printf("birinci kenari giriniz:\n");
scanf("%d",&a);
printf("ikinci kenari giriniz:\n");
scanf("%d",&b);
printf("ucuncu kenari giriniz:\n");
scanf("%d",&c);
if( (a-b)<c<(a+b) && (a-c)<b<(a+c) && (b-c)<a<(b+c)){

printf("girdiginiz degerler ucgen olusturuyor");
}
else{

printf("gecersiz deger girdiniz");
}
}

