#include <stdio.h>
#include <stdlib.h>

int main (void){
	FILE *fp;
	fp = fopen("result.txt","w");

	if(fp ==NULL){
		printf("FILE can't open.\n");
		return 1;
	}


	for(int i=1; i<=5; i++){
		for(int j = 1; j<=5; j++){
		fprintf(fp,"%5d",i*j);
		}
		fprintf(fp,"\n");
	}

	fclose(fp);
	printf("FILE have closed.\n\vFILE content:\n-----------------\n");

	system("cat result.txt");

	printf("\n\v");

}


/*ーーーーーーーーーーーーーーーーーーーーーーー

p01.cの結果をresult.txtというファイルに出力

ーーーーーーーーーーーーーーーーーーーーーー*/
