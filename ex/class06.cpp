#include <iostream>
#include <string>
using namespace std;

class Person {
		string name;
		int age;
		static int count;
	public:
		Person(){++count; name = ""; age =0;}
		Person(string s, int n){
			++count;
			name = s;
			n < 0 ? age =0 : age =n;
		}
		~Person(){--count;}
		void disp(){
			cout << "name : " << name << "\nage : " << age << "\n\v";
		}
		static void dispCount(){
				cout << "現在 " << count << "個のPersonオブジェクトが有効" << endl;
		}
};

int Person::count = 0;

void fnc(){
		Person x("関数太郎",33);
		x.disp();
		Person::dispCount();
}

int main(){
	
	Person::dispCount();

	Person a("Suzuki",45);
	Person b("Tanaka",35);

	a.disp();
	b.disp();
	a.dispCount();
	b.dispCount();
	Person::dispCount();
		
	fnc();
	Person::dispCount();

	return 0;
} 
/*
ーーーーーーーーーーーーー
C++ クラスの基本　⑥　
ーーーーーーーーーーーーー
静的メンバ、静的メンバ関数
*/
