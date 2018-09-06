#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){

	string str1, str2, str3;
	string strc;
	char cc[80];

	str1 = "Hello";
	str2 = "cpp.";
	str3 = str1 + str2;

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;

	if(str1 == "Hello" ){
			cout << str1 << " world." << endl;
	}

	strcpy(cc,"Good ");
	str1 = cc;
	strcpy(cc,"morning. ");
	str2 = cc;
	str3 = str1 + str2;

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;

	strc = "Cstyle_string";
	strcpy(cc,strc.c_str());
	cout << "strc = " << strc << " / cc = " << cc << endl;	

	return 0;
}
