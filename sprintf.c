#include <stdio.h>

int main (void){

	unsigned char a;
	unsigned char b[50];

	a = 0x12;
//	printf("\n%c\n\v",a);

	sprintf(b,"a=%x,%d",a,a);
	printf("\v%s\n\v",b);

	return 0;
}

/*

【機能】
引数が指す文字列を、ひきすうが指すバッファに出力する。
文字列中に書式制限文字が含まれている場合、続く第二引数以降を指定書式に変換し、文字列とともに出力する。

変数aに格納された値をsprintfで"a=%x,%d"の形式に変換し、バッファbに格納する。
この後printfでバッファbの内容を標準出力している。


【出力結果】
a=12,18

*/

