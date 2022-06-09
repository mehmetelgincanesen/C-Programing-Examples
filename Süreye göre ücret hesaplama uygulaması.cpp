#include<stdio.h>
int main(){
	int sure;
	float ucret;
	float yeni;
	printf("sureyi giriniz");
	scanf("%d",&sure);
	if(sure>5){
		yeni=(sure-5)*(0.33);
		ucret=(1.12)+(yeni);
		printf("ucretiniz=%f",ucret);
	}
	else
	printf("ucretiniz=1.12 tl");
}



