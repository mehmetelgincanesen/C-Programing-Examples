#include <stdio.h>
#include <stdlib.h>
int secim;
float sayi1,sayi2;
main()
{
	printf("birinci sayiyi giriniz...\n");
	scanf("%f",&sayi1);
	printf("ikinci sayiyi giriniz...\n");
	scanf("%f",&sayi2);
	printf("iþlemi seçiniz 1.toplama, 2.çikarma, 3.carpma, 4.bolme...\n");
	scanf("%d",&secim);
	if(secim==1){
		printf("sonuc: %.0f" , sayi1+sayi2);
	}
	else if(secim==2){
		printf("sonuc: %.0f" , sayi1-sayi2);
	}
	else if (secim==3){
	 	printf("sonuc: %.0f" , sayi1*sayi2);
	 }
	else if(secim==4){
		printf("sonuc: %.0f" , sayi1/sayi2);
	}
	else{
	printf("hatali giris yaptiniz lutfen kontrol ediniz...\n");
	}
}
