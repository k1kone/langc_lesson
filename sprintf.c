#include <stdio.h>

int main (void){

	unsigned char a;
	unsigned char b[50];

	a = 0x12;
//	printf("\n%c\n\v",a);

	sprintf(b,"a=%x,%d",a,a);
	printf("\v%s\n\v",b);

	return 0;
}
