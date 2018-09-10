#include <iostream>
using namespace std;

int maxdt(int a, int b);

int main(){

	cout << "MAX = " <<  maxdt(100,200) << endl;

	return 0;
}

int maxdt(int a, int b){
	if(a > b){
		return a;
	}else{ return b;}
}

/*
ーーーーーーーーーーーー
C++　関数の基本例　③　
ーーーーーーーーーーーー
戻り値を返す関数はreturnで値を返して関数を終了します。
*/
