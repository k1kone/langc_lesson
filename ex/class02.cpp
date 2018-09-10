#include <iostream>
#include <string>
using namespace std;

class Person {
	private: // private は省略可能
		string name;
		int  age;
	public:
		Person(string s ,int n);
		void setname(string s);
		void setage(int n);
		void disp();
};

Person::Person(string s ,int n){ // 初期化を行うコンストラクタ宣言
	name = s;
	if(n < 0) age = 0; else age = n;
}

void Person::setname(string s){
	name = s;	
}
void Person::setage(int n){
	if(n < 0) age = 0; else age = n;
}
void Person::disp(){
	cout << "名前 = " << name << " ,　年齢  = " << age << endl;
}


int main(){

	Person dt("Ichiroh Suzuki",45);

	dt.disp();

	return 0;
}

/*
ーーーーーーーーーーーーー
C++ クラスの基本　②
ーーーーーーーーーーーーー
アクセス制限修飾子を private とすると、外部からのアクセス・変更ができなくなります。
誤った代入などを防ぎたい場合はアクセス制限を private とします。

上記プログラムのように
・データを非公開(private)
・データを操作するメンバ関数を公開(public)
のような構造を「クラスのカプセル化」といいます。誤りの起きにくい構成になっています。


【クラスの初期化とコンストラクタ(constructor)　】
クラスのデータメンバ変数を任意の値に初期化する場合、「コンストラクタ(constructor)」と呼ばれるメンバ関数を作成します。
・コンストラクタはクラス名と同じ名前を宣言
・コンストラクタは戻り値なし

class ClassName {
		int value1;
		double value2;
	public:
		CLassName(int x, double y);
}

ClassName::ClassName(int x, double y){
	value1 = x;
	value2 = y;
}

void  main(){

	ClassName instance(50 , 25.56);

}

*/
