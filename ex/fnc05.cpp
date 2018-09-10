#include <iostream>
using namespace std;

double average( double a, double b);

int main(){

	double x = 11.11;
	double y = 33.33;

	cout << "x = " << x << " , y = " << y << " , average = " << average(x,y) << endl;

	return 0;
}

double average( double a, double b){
	return (a + b)/2.0;
}

/*
ーーーーーーーーーーーー
C++　関数の基本例　⑤
ーーーーーーーーーーーー
このプログラムは関数に数値をわたしています。
値による呼び出し（Call by value ）が行われています。
*/
