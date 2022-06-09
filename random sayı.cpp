#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 srand(time(NULL));	
 int rastgele;
 rastgele=rand()%6;
 printf("%d",rastgele);
 return 0;	
}
