#include<stdio.h>
int sayi;
int bb,ob,yb,binb;
int main(){
	printf("basamaktaki de�erleri ��renmek icin 4 basamakl� birsayi giriniz");
	scanf("%d",&sayi);
	if(sayi<1000 || sayi>9999){
		printf("hatali giris yaptiniz.");
		
	}
	else{
		bb=(sayi%10);
		printf("birler basamag�ndaki sayi=%d\n",bb);
		
		ob=(((sayi%100)-bb)/10);
		printf("onlar basamag�ndaki sayi=%d\n",ob);
		
		yb=(((sayi%1000)-(sayi%100))/100);
		printf("y�zler basamag�ndaki sayi=%d\n",yb);
		
		binb=(((sayi%10000)-(sayi%1000))/1000);
		printf("binler basamag�ndaki sayi=%d\n",binb);
	}
	
}
