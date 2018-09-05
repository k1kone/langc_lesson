#include <stdio.h>

int result(int *p){
	fprintf(stderr,"ソースファイル名 : %s\n",__FILE__);
	fprintf(stderr,"作成日付 : %s\n",__DATE__);
	fprintf(stderr,"作成日時 : %s\n",__TIME__);
	fprintf(stderr,"関数名 : %s\n",__func__);

	for(int i = 0; i<5; i++){
		*p = i + *p;
	}

	printf("1~5の合計は%dです。\n\v",*p);
}

void main(void){

	int sum = 0;

	/*fprintf(stderr,"ソースファイル名 : %s\n",__FILE__);
	fprintf(stderr,"作成日付 : %s\n",__DATE__);
	fprintf(stderr,"作成日時 : %s\n",__TIME__);

	for(int i = 0; i<5; i++){
		sum = i + sum;
	}

	printf("1~5の合計は%dです。\n\v",sum);*/


	result(&sum);

}

/*ーーーーーーーーーーーーーーーーーーーーー
★　組み込みマクロ
ーーーーーーーーーーーーーーーーーーーーーー
標準マクロです。
ソース上でマクロを定義していなくても使用できます。

【組み込みマクロ例 】

__LINE__ … ソースファイルの行番号
__FILE__ … ソースファイルのファイル名
__DATE__ … ソースファイルのコンパイル時の日付
__TIME__ … ソールファイルのコンパイル時の時刻
__TIMESTAMP__ … ソースファイルの最終更新時の時刻
__STDC__ … ANSI C に対応していれば 1
__func__ … どの関数で出力されたかを返す

ーーーーーーーーーーーーーーーーーーーーーー*/
