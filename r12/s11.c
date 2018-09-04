#include <stdio.h>
#define NUM 120

int main (void){

	FILE *fp;
	char str1[NUM],str2[NUM],str3[NUM];

	fp = fopen("test1.txt","r");
	if(fp == NULL){
		printf("flile can't open.\n\v");
	}else printf("file open.\n\v");

	fgets(str1,NUM-1,fp);
	fgets(str2,NUM-1,fp);
	fgets(str3,NUM-1,fp);

	printf("%s%s%s\n\v",str1,str2,str3);

	fclose(fp);

	printf("file close.\n\v");

	return 0;

}

/*

fget関数で読み込んだファイルの内容を取り込んでいます。
fgets関数は、指定されたストリーム（読み込まれたファイル？？？）の１行分を指定した配列へ格納します。
「NUM-1」とすることで、「\0」の分を確保しておきます。
引数は、

	第一：格納先の配列
	第二：１行の最大文字数
	第三：ストリーム（読み込まれたファイル）
です。
*/
