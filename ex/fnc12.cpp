#include <iostream>
using namespace std;

inline double circle_in(double r){//インライン関数の定義
	return r*r*3.14159;
}

double circle(double r){//通常関数の定義
	return r*r*3.14159;
}

int main(){

	double a = 10.0, b = 20.0;

	cout << "area1 = " << circle_in(a) << endl; // インライン関数
	cout << "area2 = " << circle(b) << endl; // 通常関数
	
	return 0;
}


/*
ーーーーーーーーーーーー
C++　関数の基本例　⑫　
ーーーーーーーーーーーー
処理速度が重視され、何度も呼び出すほどのものでもない関数は
C言語ではマクロ関数を使いますが、C++ではインライン関数定義を行います。

関数の前に " inline " と記述してください。
インライン関数をしようすると、関数を呼び出すのではなく、
インライン関数の中身の処理をその部分に埋め込むことになります。
これにより、通常関数の呼び出し（移動）時間を省くことができます。：ｗ:w

※ インライン関数はプログラムサイズが肥大されると判定されれば、通常関数として扱われ、インライン展開されません。
*/
