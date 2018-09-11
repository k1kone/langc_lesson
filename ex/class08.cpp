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
	void dispFoo(){ cout << "x = " << x << "\n\v"; }
};

//派生クラス
class Bar : public Foo {
	int y;
	public:
	Bar(){ setX(0); y = 0; }
	Bar(int n1, int n2){ setX(n1); y = n2; }
	void setY(int n){ y = n; }
	int getY(){ return y; }
	void dispBar(){dispFoo(); cout << "y = " << y << "\n\v";}

};



int main(){
	
	Bar bar(10,20);

	cout << "ーーーBarの確認ーーー\n";
	bar.dispFoo();
	bar.dispBar();


	cout << "ーーーsetX,setYを使用ーーー\n";
	bar.setX(100);
	bar.setY(200);
	bar.dispBar();

	cout << "ーーーgetX,getYを使用ーーー\n";
	cout << "bar.x = " << bar.getX() << endl;
	cout << "bar.y = " << bar.getY() << "\n\v";

	return 0;
} 
/*
ーーーーーーーーーーーーー
C++ クラスの基本　⑧
ーーーーーーーーーーーーー
C++ではクラスAを継承してクラスBを作成することができます。
クラスBはクラスAのメンバを引き継ぎます。
これを継承（インヘリタンス：inheritance）といいます。


//基底クラス(base class)
class ClassA {
	public:
		int x;
		void fnc(){ }		
 };

//派生クラス (derived class)
class ClassB : public classA {
	// ClassA のメンバ(x、fnc）が継承されます。

	public:
	int y; // ClassB内で機能を追加することができます。
 };

*/
