#include <iostream>
#include <string>
using namespace std;

class Person {

	public:
		string name;
		int  age;
		void disp();
};

void Person::disp(){
	cout << "名前 = " << name << " ,　年齢  = " << age << endl;
}


int main(){

	Person dt;

	dt.name = "Ichiroh Suzuki";
	dt.age = 30;
	dt.disp();

	return 0;
}

/*
ーーーーーーーーーーーーー
C++ クラスの基本　①
ーーーーーーーーーーーーー
クラスはデータと関数をメンバにもつことができるユーザ定義型機能です。
C言語の構造体にさまざまな機能強化したものといえます。

クラス構文は次のようになります。
・「データメンバ」はそのクラスの変数です
・「メンバ関数」はそのクラスの関数です。


class CLASSNAME{

	public:         // アクセス制限の修飾子(publick / protected / private ) ※ 何も記述しないと private となります。
	
		int menber; // int型のデータメンバ
		void fnc(); // fncという関数を定義
};

void CLASSNAME::fnc(){
	// 関数の内容を記述
}

*/
