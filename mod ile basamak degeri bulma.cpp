#include<stdio.h>
int sayi;
int bb,ob,yb,binb;
int main(){
	printf("basamaktaki değerleri öğrenmek icin 4 basamaklı birsayi giriniz");
	scanf("%d",&sayi);
	if(sayi<1000 || sayi>9999){
		printf("hatali giris yaptiniz.");
		
	}
	else{
		bb=(sayi%10);
		printf("birler basamagındaki sayi=%d\n",bb);
		
		ob=(((sayi%100)-bb)/10);
		printf("onlar basamagındaki sayi=%d\n",ob);
		
		yb=(((sayi%1000)-(sayi%100))/100);
		printf("yüzler basamagındaki sayi=%d\n",yb);
		
		binb=(((sayi%10000)-(sayi%1000))/1000);
		printf("binler basamagındaki sayi=%d\n",binb);
	}
	
}
