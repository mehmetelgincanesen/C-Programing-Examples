#include<stdio.h>
int main()
{
	int vize1,vize2,final;
	float ortalama;
	printf("BÝrinci vizeyi girin:\n");
	scanf("%d",&vize1);
	printf("Ýkinci vizeyi girin:\n");
	scanf("%d",&vize2);
	printf("final vizeyi girin:\n");
	scanf("%d",&final);
	ortalama=(((vize1+vize2)/2)*0.4)+(final*0.6);
	printf("ortalama=%f\n",ortalama);
	if(ortalama>=89 && ortalama<=100)
	printf("AA"); 
	
	else if(ortalama>=80 && ortalama<=88)
	printf("BA");
	
	else if(ortalama>=72 && ortalama<=79)
	printf("BB");
	
	else if(ortalama>=65 && ortalama<=71)
	printf("CB");
	
	else if(ortalama>=59 && ortalama<=64)
	printf("CC");
	
	else if(ortalama>=54 && ortalama<=58)
	printf("DC");
	
	else if(ortalama>=50 && ortalama<=53)
	printf("DD");
	
	else if(ortalama>=0 && ortalama<=49)
	printf("FF");
		
}
