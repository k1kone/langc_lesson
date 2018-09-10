#include <iostream>
using namespace std;

void arrydisp( int a[], int len);

int lenre(int a[]);

int main(){

	int arry[5] = {10,45,90,14,1};
	int *ap = arry;
	arrydisp(arry,sizeof(arry)/sizeof(arry[0]));
	
	cout << "sizeof(arry) = " << sizeof(arry) << "\n\v"  << endl;
	return 0;
}

void arrydisp( int a[], int len){
	int i;
	for(i=0; i<len; i++){
			cout << "array[" << i+1 << "] = " << a[i] << endl; 
	}
	
	cout << "\nfunc{ sizeof(arry) } = " << sizeof(&a) << "\n※ 関数に渡された配列はポインタになるので、配列のサイズを参照できない\n" << endl;
}

	
/*
ーーーーーーーーーーーー
C++　関数の基本例　⑦　
ーーーーーーーーーーーー
配列を関数に渡すときは、配列名を引数にして関数を呼び出します。
関数側では、渡された配列の長さは図らないので、この列では要素数も引数で渡しています。

【配列の数の算出 】
sizeof(arry) / sizeof( int )  →　配列のサイズ　÷　int 型1個分のサイズ

sizeof(arry) / sizeof(arry[0]) →　配列のサイズ　÷　配列1個分のサイズ
*/
