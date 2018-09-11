#include <iostream>
#include <string>
using namespace std;

class MyClass{
	private:
		int idt;
	public:
		MyClass(int n);
		~MyClass();
		void disp();
};

MyClass::MyClass(int n){
	idt=n;
	cout << "argument = " << idt << "でコンストラクタが呼ばれました。 " << endl;
}

MyClass::~MyClass(){
	cout << "idt = " << idt << "のデスクトラクタが呼ばれました。" << endl;
}

void MyClass::disp(){
 cout << "disp:idt = " << idt << endl;
}

void fnc(){
	MyClass c(300);
	c.disp();
}

int main(){

	int nn = 1;
	MyClass a(100);
	a.disp();

	if(nn==1){
		MyClass b(200);
		b.disp();
	}

	fnc();

	return 0;
} 
/*
ーーーーーーーーーーーーー
C++ クラスの基本　④　
ーーーーーーーーーーーーー
クラスの終了処理を行うものとしてデクストラクタを宣言することができます。

・変数の寿命がくると、デスクトラクタが自動で呼び出されます。
・デストラクタには戻り値・引数はありません。
・~（チルダ） + クラス名で宣言できます。
・クラスのメモリリークを防ぐことができます。
*/
