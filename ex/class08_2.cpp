#include <iostream>
#include <string>
using namespace std;

//基底クラス
class Foo{
	int x;
	public:
	Foo(){ x=0; }
	Foo(int n){ x =n; }
	void setX(int n){ x = n; }
	int getX(){ return x; }
	void disp(){ cout << "x = " << x << "\n\v"; }
};

//派生クラス
class Bar : public Foo {
	int y;
	public:
	Bar():Foo(0) { y = 0; }
	Bar(int n1, int n2):Foo(n1) { y = n2; }
	void setY(int n){ y = n; }
	int getY(){ return y; }
	void disp(){
		Foo::disp();
		cout << "y = " << y << "\n\v";
	}

};



int main(){
	
	Foo foo(10);
	Bar bar(20,30);

	cout << "ーーーFooの確認ーーー\n";
	foo.disp();

	cout << "ーーーBarの確認ーーー\n";
	bar.disp();

	return 0;
} 
/*
ーーーーーーーーーーーーー
C++ クラスの基本　⑧
ーーーーーーーーーーーーー
同一名のメンバを使用する
*/
