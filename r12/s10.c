#include <stdio.h>
#define NUM 5

int main (void){
	FILE *fp;
	int test[NUM];

	fp = fopen("test2.txt","w");

	if(fp==NULL){
		printf("file can't open.\n\v");
		return 1;
	}else printf("file open.");

	printf("input score.\n");
	for(int i=0; i<NUM; i++){
		scanf("%d",&test[i]);
	}

	for(int j =0; j<NUM; j++){
			fprintf(fp,"No.%d score:%333d\n\v",j,test[j]);
	}
	fclose(fp);
	printf("file close.\n\v");

}
