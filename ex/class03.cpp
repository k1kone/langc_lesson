#include <iostream>
#include <string>
using namespace std;

class Person {
	private: // private は省略可能
		string name;
		int  age;
	public:
		Person();
		Person(string s);
		Person(string s ,int n);
		Person(int n);
		void setname(string s);
		void setage(int n);
		void disp();
};

Person::Person(){ // 引数のないコンストラクタ 
	name = "";
	age = 0; 
}

Person::Person(string s){ // 名前だけのコンストラクタ 
	name = s;
	age = 0; 
}

Person::Person(int n){ // 年齢だけのコンストラクタ 
	name = "";
	setage(n);
}

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

	Person dt1;
	Person dt2("Suzuki");
	Person dt3(33);
	Person dt4("Tanaka",55);

	dt1.disp();
	dt2.disp();
	dt3.disp();
	dt4.disp();

	return 0;
} 
/*
ーーーーーーーーーーーーー
C++ クラスの基本　③
ーーーーーーーーーーーーー
コンストラクタの多重定義が可能です。
オーバーロードも可能です。
*/
