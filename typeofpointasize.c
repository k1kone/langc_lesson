#include <stdio.h>
#define N 5
void main (void){

	char char_Array[N] = {0};
	int int_Array[N] = {0};
	long long long_long_Array[N] = {0};
	short shot_Array[N] = {0};
	
	char *pc = char_Array;
	int *pn = int_Array;
	long long *pl = long_long_Array;
	short *ps = shot_Array;

	//char array ーーーーーーーーーー
	for(int i =0; i<N; i++){
		printf("char_Array[%d] : %c\n& : %p\n sizeof : %lu\n\v",i,*(pc + i),pc+i,sizeof(*(pc + i)));

		if(i==N-1){
			 printf("\nーーーーーーーーーーー\n\v");
		}
	}

	//int array ーーーーーーーーーー
	for(int i =0; i<N; i++){
		printf("int_Array[%d] : %d\n& : %p\n sizeof : %lu\n\v",i,*(pn + i),pn+i,sizeof(*(pn + i)));

		if(i==N-1){
			 printf("\nーーーーーーーーーーー\n\v");
		}
	}

	//long long array ーーーーーーーーーー
	for(int i =0; i<N; i++){
		printf("long_long_Array[%d] : %llu\n& : %p\n sizeof : %lu\n\v",i,*(pl + i),pl+i,sizeof(*(pl + i)));

		if(i==N-1){
			 printf("\nーーーーーーーーーーー\n\v");
		}
	}

			
	//short array ーーーーーーーーーー
	for(int i =0; i<N; i++){
		printf("shot_Array[%d] : %d\n& : %p\n sizeof : %lu\n\v",i,*(ps + i),ps+i,sizeof(*(ps + i)));

		if(i==N-1){
			 printf("\nーーーーーーーーーーー\n\v");
		}
	}

}
