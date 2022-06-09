#include <stdio.h>
float sicaklik,kelvin;
main(void)
{
	printf("sicakligi giriniz...\n");
	scanf("%f", &sicaklik);
	kelvin=sicaklik+273;
	printf("kelvin degeri= %f", &kelvin);
}
