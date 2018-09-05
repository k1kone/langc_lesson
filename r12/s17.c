#include <stdio.h>
#define DEBUG

void main(void){

	int i,sum=0;

	for(i=0; i<5; i++){
		#ifdef DEBUG
			fprintf(stderr,"変数sumの値は%dとなっています。\n",sum);
			sum = i + sum;
		#endif
	}

	printf("1~5までの合計は%dです。\n\v",sum);

}

/*ーーーーーーーーーーーーーー
★ 条件付きコンパイル
ーーーーーーーーーーーーーーー

指定のマクロが定義されていた場合に、
#ifdef ~ #endif 内に記述された内容がコンパイルされます。

①　「#define DEBUG 」でマクロを定義
②　
#ifdef //マクロが定義されていた場合

	③　ここに記述されている内容をコンパイルします。

#endif //終了

・・・・・・・・・・・・・・・・・・

c言語コードないでマクロが定義されていなくても、
linux上で（上記コードでは）

gcc -DDEBUG s17.c -o s17

とすると、条件付きコンパイルが行われます。
[ gcc -D+マクロ名　指定ファイル -o 指定コンパイルファイル名 ]

・・・・・・・・・・・・・・・・・・

【 fprintf 】
書式文字列にしたがってストリームに出力。
[ fprintf(FILE *fp/出力形式,書式文字列,可変個引数); ]


・・・・・・・・・・・・・・・・・・

【 stderr 】
stderr は標準エラー出力を指定するものです。
標準エラー出力のため、上記のコードではlinux上で、

s17(compiled filename) 2>error.log

とすると、③ の内容は表示されず、
error.log にリダイレクトされます。

ーーーーーーーーーーーーーーーーーー*/
