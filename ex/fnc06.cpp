#include <iostream>
#include <string>
using namespace std;

void string_disp(string s);
string string_paren(string s);

int main(){

	string ss = "Hello", ss2;
	string_disp(ss);
	string_disp("World.");

	ss2 = string_paren(ss);
	cout << "ss2 = " << ss2 << endl;

	return 0;
}

void string_disp(string s){
	cout << s << endl;
}

string string_paren(string s){
	string w;
	w = "( " + s + " )";
	return  w;
}
/*
ーーーーーーーーーーーー
C++　関数の基本例　⑥　
ーーーーーーーーーーーー
*/
