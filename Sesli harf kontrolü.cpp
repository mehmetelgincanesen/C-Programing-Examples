#include <stdio.h>
#include <conio.h> 
int 	main()
{
      char H = ' ';

      printf("\n Sesli Harf Kontrolu........");
      printf("\n ===========================");

      printf("\n Bir Harf giriniz :");
      scanf("%c",&H);
      fflush(stdin);

      if( H == 'A' || H == 'E' || H == 'I' || H == 'O' || H == 'U' )
      printf("\n %c Bir SESLI Harftir.",H);

      else
      printf("\n %c Bir SESLI harf Degildir.",H);

      return(0);
}

