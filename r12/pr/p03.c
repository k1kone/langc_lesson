#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]){

	if(argc !=2){
		printf("argement is not two.");
		return 1;
	}

	FILE *fp;
	fp = fopen(argv[1],"w");

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

	char c[20]={'\0'};
	sprintf(c,"cat %s", argv[1]);
	system(c);

	printf("\n\v");

}

/*ーーーーーーーーーーーーーーーーーーーーーーー

p01.cの結果をmain関数の引数に入力されたファイル名の
ものに出力。


【sprintf  】
文字列書式に従って文字配列に書き込みます．

sprintf(,,);

▼ sample code:---------------------

int main(void) {
    char s[N] = {'\0'};
    char name[] = "ペパーミント・パティ";
    char sex[] = "女性";
    int age = 7;

    sprintf(s, "%sさんは%d歳の%sです．", name, age, sex);

    printf("%s\n", s);
--------------------------------------

system関数にmain関数の引数argv[1]を読み込ませるために
sprintfを使用しました。

ーーーーーーーーーーーーーーーーーーーーーーー*/
