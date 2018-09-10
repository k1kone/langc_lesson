#include <iostream>
using namespace std;

void fnc(int& a){
		a *= 2;
}

int main (){

	int dt =10;
	int& rf = dt;

	cout << "dt = " << dt << endl;
	cout << "rf = " << rf << endl;

	fnc(rf);
	cout << "dt = " << dt << endl;
	cout << "rf = " << rf << endl;

	fnc(dt);
	cout << "dt = " << dt << endl;
	cout << "rf = " << rf << endl;

	return 0;

}

/*
ーーーーーーーーーーーーー
C++ 参照 ②　
ーーーーーーーーーーーーー
C言語では値渡しとポインタ渡しがありましたが、
C++ ではさらに参照渡しがあります。

【参照 】
・元の変数に別名をあたえる記法
・変更すると、呼び出し元の値も変えられる
・無効値が存在しない
(NULLを代入できません）
*/
