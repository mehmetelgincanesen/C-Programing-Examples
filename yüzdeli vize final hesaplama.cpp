#include<stdio.h>
/*birinci + ikinvi bölü 2 nin yüzde 40ý yüzde 60 da final*/
float vize1,vize2;
float final;
float ort;
int main(){ 
if(vize1<100){

	printf("birinci vize:");
	scanf("%f",&vize1);
}
else{
printf("yanlýs deðer girdiniz..");
	
}
	if(vize2<100){
	
	printf("ikinci vize:");
	scanf("%f",&vize2);
}
else{
printf("yanlýs deðer girdiniz..");
	
}
if(final<100){
	printf("final:");
	scanf("%f",&final);
}
else{
printf("yanlýs deðer girdiniz..");
	
}
	ort=(final*60/100)+(((vize1+vize2)/2)*40/100);
	if(ort>49){
		printf("dersi gectiniz");
		
	}
	else{
		printf("bute kaldýnýz");
	}
	
}


