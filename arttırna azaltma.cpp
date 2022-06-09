#include <stdio.h>
int main()
{
	int x=3;
	int y=5;
	int z=8;
	printf("x:%d\ny:%d\nz:%d\n",x++,--y,++z);
	printf("x:%d\ny:%d\nz:%d\n",x++,y--,++z);
	
	int a=1;
	int b=3;
	int c=4;
	a+=b+2;
	b-=1;
	c=a+2*b;
	printf("a:%d\nb:%d\nc:%d\n",a,b,c);
	
}
