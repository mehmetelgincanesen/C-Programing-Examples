#include<stdio.h>
/*birinci + ikinvi b�l� 2 nin y�zde 40� y�zde 60 da final*/
float vize1,vize2;
float final;
float ort;
int main(){ 
if(vize1<100){

	printf("birinci vize:");
	scanf("%f",&vize1);
}
else{
printf("yanl�s de�er girdiniz..");
	
}
	if(vize2<100){
	
	printf("ikinci vize:");
	scanf("%f",&vize2);
}
else{
printf("yanl�s de�er girdiniz..");
	
}
if(final<100){
	printf("final:");
	scanf("%f",&final);
}
else{
printf("yanl�s de�er girdiniz..");
	
}
	ort=(final*60/100)+(((vize1+vize2)/2)*40/100);
	if(ort>49){
		printf("dersi gectiniz");
		
	}
	else{
		printf("bute kald�n�z");
	}
	
}


