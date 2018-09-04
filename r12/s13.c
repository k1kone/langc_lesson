#include <stdio.h>
#include <stdlib.h>
#define NUM 5 

int main (void){

	FILE *fp;
	//int test[]={34,57,24,79,57};
	int test[NUM];

	fp = fopen("s13.bin","wb");
	if(fp == NULL){
		printf("flile can't open.\n\v");
	}else printf("file have opened.\n\v");

	printf("input number 5time.\n");
	for(int i=0; i<NUM; i++){
		scanf("%d",&test[i]);
	}

	/*for(int j=0; j<NUM; j++){
		fwrite(&test[j],sizeof(int),1,fp);
	}*/

	//一行での書き方
	fwrite(test,sizeof(test),1,fp);


	fclose(fp);

	printf("file have writen and closed.\n\v[[[[  \"d[-Ad]\"command result:  ]]]]\nーーーーーーーーーーーーーーーーー\n\v");

	system("od -d -Ad s13.bin");
	return 0;

}

/*


.binファイルは下記のコマンドでlinuxで確認できます。
*odコマンドはバイナリファイルを１６進数などでダンプするコマンドです。

*ファイル名を指定するとファイルを読み込み、そうでない場合は標準入力を読み込み、標準出力にダンプします。

od -d filename.bin

-d　符号付き10進数
-d -Ad 10進数
-x 16進数

*/
