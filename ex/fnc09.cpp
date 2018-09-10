#include <iostream>
using namespace std;

void ccc(char *c);

void date(int *d);

int main(){

	char c[] = "Hello!";
	int dt = 30;

	ccc(c);
	date(&dt);

	return 0;
}

void ccc(char *c){
	cout << "文字列は " << c << endl;
	cout << "先頭文字は " << *c << "\n\v";

}

void date(int *d){
	cout << "date = " << *d << "\n\v";
}

/*
ーーーーーーーーーーーー
C++　関数の基本例　⑨　
ーーーーーーーーーーーー
C++のポインタ渡しはCと同じようにできます。
*/
