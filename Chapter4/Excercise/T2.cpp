// T2
// 修改程序清单4.4，使用C++ string类而不是char数组。
// 程序清单4.4 instr2.cpp -- reading more than one word with getline
#include <iostream>
#include <string>

int main(){
	using namespace std;
//	const int ArSize = 20;
	string name;    //修改前为 char name[ArSize];
	string dessert; //修改前为 char dessert[ArSize];
	
	cout << "Enter your name:\n";
	getline(cin, name);    //修改前为 cin.getline(name, ArSize);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert); //修改前为 cin.getline(dessert, ArSize);
	cout << "I have soem delicious " << dessert;
	cout << " for you, " << name << ".\n";
	
	return 0;
}
