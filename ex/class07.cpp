#include <iostream>
#include <string>
using namespace std;

class StrNum {
	string str;
	int num;

	public:
	void set(string s, int n);
	void disp();
};

void StrNum::set(string s, int n){
	str = s; n < 0 ? num = 0: num = n;
}

void StrNum::disp(){
	cout << "str = " << str << "\nnum = " << num << "\n\v";
}

StrNum fnc_v(StrNum dt){// 引数にクラスをわたす
	cout << "現在の内容："; dt.disp();
	dt.set("fnc_v設定文字列" , 20 );
	return dt;
}

void fnc_p(StrNum* dt){// 引数にクラスのポインタを渡す
	cout << "現在の内容："; dt -> disp();
	dt -> set("fnc_p設定文字列",25);
}

void fnc_r(StrNum& dt){// 引数にクラスの参照をわたす
	cout << "現在の内容："; dt.disp();
	dt.set("fnc_r設定文字列",25);
}


int main(){
	
	StrNum a;

	a.set("Test1",0);
	a = fnc_v(a);
	a.disp();

	a.set("Test2",0);
	fnc_p(&a);
	a.disp();

	a.set("Test3",0);
	fnc_r(a);
	a.disp();

	return 0;
} 
/*
ーーーーーーーーーーーーー
C++ クラスの基本　⑦　
ーーーーーーーーーーーーー
1.関数の引数へクラスを渡す場合
Classname functionname(Classname arg){
	// 
}

2.関数の引数へクラスをポインタとして渡す場合
型(void/int/double/string/,,,,) fucntionName(Classname* arg){
	arg -> member // メンバを呼び出す際は =>（アロー関数）を記述
}

3.関数の引数へクラスを参照として渡す場合
型(void/int/double/string/,,,,) fucntionName(Classname& arg){

}
*/
