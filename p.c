#include <stdio.h>
#define N 10

void main (void){

	int v[N]={0};
	int *p = v;

	*p++ =1;
	*p = 2;
	p = &v[5];
	*++p = 3;
	*p =4;

	p = v;
	for(int i=0; i<N; i++){
		printf("%d\n",*(p+i));
	}

}
