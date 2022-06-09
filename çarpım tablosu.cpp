#include<stdio.h>
int main(){
int i;
int a;
int carpim;

for(i=1;i<=10;i++){
	for(a=1;a<=10;a++){
		carpim=i*a;
		printf("%dx%d=%d\n",i,a,carpim);
	}
}
}
