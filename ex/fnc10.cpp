#include <iostream>
using namespace std;

int disp(int a, int b = 200, int c = 300);

int main(){

	disp(111);
	disp(111,222);
	disp(111,222,333);
	//disp(); ERROR 引数a は初期値設定がないため必須

	return 0;
}


int disp(int a, int b, int c){
	cout << "a = " << a << " , b = " << b << " , c = " << c <<endl;
}

/*
ーーーーーーーーーーーー
C++　関数の基本例　⑩　
ーーーーーーーーーーーー
引数を省略したとき、規定の値を取る関数を宣言できます。
*/
