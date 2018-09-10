#include <iostream>
#include <string>
using namespace std;

void strout( char ss[]);

int main(){

	char str[] = "Hello";
	char* sp = str;
	strout(str);

	strout((char*) "World");

	while(*sp != '\0'){
		cout << *sp << endl;
		sp++;
	}
			
	return 0;
}

void strout( char ss[]){
	cout << "文字列は" << ss << endl;
	cout << "先頭文字は" << ss[0] << "\v" << endl;
	while(*ss!=0){
		cout << *ss << endl;
		ss++;
	}
}

/*
ーーーーーーーーーーーー
C++　関数の基本例　⑧　
ーーーーーーーーーーーー
Cスタイルの文字列も通常の配列と同じ方法で関数にデータを渡すことができます。
Cスタイル文字列は、末尾が'\0'なので要素数を渡す必要がありません。
*/
