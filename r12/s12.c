#include <stdio.h>
#define NUM 5 

int main (void){

	FILE *fp;
	int test[NUM],max,min,j,k;

	fp = fopen("s12.txt","r");
	if(fp == NULL){
		printf("flile can't open.\n\v");
	}else printf("file open.\n\v");

	for(int i=0; i<NUM; i++){
		fscanf(fp,"%d",&test[i]);
	}

	max=min=test[0];

	for(j=0; j<NUM; j++){
		int tmp;
		for(k=j+1; k<NUM; k++){
			if(test[j]<test[k]){
				tmp = test[k];
				if(max<tmp)max=tmp;
				test[k]=min=test[j];
				test[j]=tmp;
			}
		}
	}

	for(int l=0; l<NUM; l++){
		printf("NO.%-3dscore:%3d\n",l+1,test[l]);
	}
	printf("max :%d  ,min :%d\n\v",max,min);
	fclose(fp);

	printf("file close.\n\v");

	return 0;

}

/*
fscan関数は書式指定をしてファイルから値を読み込み、バッファに格納します。

fscanf(FILE *file,書式指定文字列,格納可変個引数);

*/
