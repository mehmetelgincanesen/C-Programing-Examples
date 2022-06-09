/* 39 2739 Mehmet Elgincan ESEN*/
#include <stdio.h>
int miktar,on,yirmi,elli,yuz;
int main()
{
printf("Cekiceginiz para miktarini giriniz:\n");
scanf("%d",&miktar);

if(0!=miktar%10){
printf("en kucuk 10 tllik banknot mevcut\n");
}

else{
yuz=(miktar/100);
printf("yuzluk sayisi=%d\n");

elli=(miktar-(100*yuz))/50;
printf("elli sayisi=%d\n",elli);

yirmi=(miktar-(100*yuz+50*elli))/20;
printf("yirmi sayisi=%d\n",yirmi);

on=(miktar-(100*yuz+50*elli+20*yirmi))/10;
printf("onluk sayisi=%d\n",on);
}
return 0;
}

