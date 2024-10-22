// T4
// 编写一个程序，它要求用户首先输入其名，然后输入其姓；
// 然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
// 本题与T3的区别：使用string对象和头文件string中的函数。

#include<iostream>
#include<string>

int main(){
	using namespace std;
	string first_name, last_name, full_name;
	
	cout << "Enter your fist name: ";
	getline(cin, first_name);
	cout << "Enter your last name: ";
	getline(cin, last_name);
	
	full_name = first_name + ", " + last_name;
	cout << "Here's the information in a single string: " << full_name;
   
	return 0;
}
