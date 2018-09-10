#include <iostream>
using namespace std;

int main (){

	int dt =10;
	int& rf = dt;

	cout << "dt = " << dt << endl;
	cout << "rf = " << rf << endl;

	rf = 20;

	cout << "dt = " << dt << endl;
	cout << "rf = " << rf << endl;

	return 0;

}

/*
ーーーーーーーーーーーーー
C++ 参照　①
ーーーーーーーーーーーーー
C言語では値渡しとポインタ渡しがありましたが、
C++ ではさらに参照渡しがあります。

【参照 】
・元の変数に別名をあたえる記法
・変更すると、呼び出し元の値も変えられる
・無効値が存在しない

*/
