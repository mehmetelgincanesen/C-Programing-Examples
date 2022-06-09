#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int rastgele(int x,int y);
int main(){
	int a,b,rast;
	printf("alt degeri girin:");
	scanf("%d",&a);
	printf("üst degeri girin:");
	scanf("%d",&b);
	rastgele(a,b);
		
}
int rastgele(int x,int y){

int i,sayi,cikan; 

srand(time(NULL));	
for(i=0;i<1;i++){ 
		sayi=x+rand()%y; 
		printf("%d\n",sayi); 

}
}
