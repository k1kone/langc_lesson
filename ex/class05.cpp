#include <iostream>
#include <string>
using namespace std;

class Person {
		string name;
		int age;
	public:
		Person(){name=""; age =0; }
		Person(string s, int n){
			name = s;
			n < 0 ? age =0 : age =n;
		}
		void setname(string s){ name = s; }
		void setage(int n){ n <0 ? age  = 0 : age  = n;}
		void disp(){
			cout << "name : " << name << "\nage : " << age <<endl;
		}
};

int main(){

	Person dt1("Suzuki",45);
	Person dt2;

	dt2.setname("Sato");
	dt2.setage(34);
	
	dt1.disp();
	dt2.disp();

	return 0;
} 
/*
ーーーーーーーーーーーーー
C++ クラスの基本　⑤
ーーーーーーーーーーーーー
クラス宣言部の中に記述されたメンバ関数を「インラインメンバ関数」といいます。小さな処理の関数である場合は、インライン関数で記述を行うと可読性が向上する利点があります。
*/
