#include <iostream>
using namespace std;

int maxdate( int a ,int b);
int maxdate( int  a, int b, int c);
double maxdate( double a, double b);

void putd(int d);

int main(){

	int n1, n2, n3, id1 = 1111, id2 = 2222;
	double db;

	n1 = maxdate(id1 ,id2);
	n2 = maxdate(3333, 4444);
	n3 = maxdate(3333, 4444 ,5555);
	db = maxdate(55.55 ,66.66);

	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	cout << "n3 = " << n3 << endl;
	cout << "db = " << db << endl;

	return 0;
}


int maxdate( int a ,int b){
	if(a > b) return a; else return b;
}

int maxdate( int  a, int b, int c){
	if(a > b && a > c) return a;
	if(b > c) return b; else return c;
}

double maxdate( double a, double b){
	if(a > b)return a ; else return b;
}

/*
ーーーーーーーーーーーー
C++　関数の基本例 ⑪　
ーーーーーーーーーーーー
仮引数構成（データ型および個数）が異なる場合、その関数を呼ぶときに実際に使われている実引数の型と個数化r自動的に適切なカンスが選択されます。
これを　「　関数の多重定義（overloading / オーバーロード）　」といいます。
*/
