#include <stdio.h>

int main (int argc,char *argv[]){

	FILE *fp;
	char c ;
	
	if(argc!=2){
			printf("argument is not two.\n\v");
			return 1;
	}

	fp = fopen(argv[1],"r");
	if(fp == NULL){
		printf("flile can't open.\n\v");
	}else printf("file have opened.\n\v");


	printf("filename :[[[   %s   ]]]]\nfile contents are : \n-----------------\n\v",argv[1]);
	while((c=fgetc(fp))!=EOF){
		putchar(c);
	}
	printf("\n\v-------------------\nend...\n\v");


	fclose(fp);


	printf("file have closed.\n\v");

	return 0;

}

/*

main関数に引数をもたせ、ファイル実行時に引数を受け取ることができます。

入力した1番目の引数は arvg[0]、
さらに入力された引数は avgr[1],
avgr[2]...となっていきます。


*/
