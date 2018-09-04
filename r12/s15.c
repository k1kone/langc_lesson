#include <stdio.h>

int main (void){

	FILE *fp;
	int num,i;

	fp = fopen("s13.bin","rb");
	if(fp == NULL){
		printf("flile can't open.\n\v");
	}else printf("file have opened.\n\v");

	printf("input number of date length.\n");
	scanf("%d",&i);

	fseek(fp,(i-1)*sizeof(int),SEEK_SET);
	fread(&num,sizeof(int),1,fp);

	printf("\v%d番目のデータは%dです。\n\v",i,num);

	fclose(fp);

	printf("file have closed.\n\v");

	return 0;

}

/*

fread(読み込む領域へのポインタ,データサイズ,個数,ファイルポインタ);


ーーー「「『　　fseek　　』」」」ーーー

fseek(ファイルポインタ,移動するサイズ,開始位置);

＊開始位置の指定＊
SEEK_SET  --- ファイルの先頭
SEEK_CUR  --- 現在位置
SEEK_END  --- ファイルの末尾

*/
