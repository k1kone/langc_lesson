#include <stdio.h>
#include <stdlib.h>
#define NUM 5 

int main (void){

	FILE *fp;
	int test[NUM];

	fp = fopen("s13.bin","rb");
	if(fp == NULL){
		printf("flile can't open.\n\v");
	}else printf("file have opened.\n\v");


	/*for(int j=0; j<NUM; j++){
		fread(&test[j],sizeof(int),1,fp);
	}*/

	//一行での書き方
	fread(test,sizeof(test),1,fp);

	for(int i=0; i<NUM; i++){
		printf("%d : %d\n",i+1,test[i]);
	}



	fclose(fp);

	printf("\n\vfile have closed.\n\v");

	return 0;

}

/*

fread(読み込む領域へのポインタ,データサイズ,個数,ファイルポインタ);

*/
