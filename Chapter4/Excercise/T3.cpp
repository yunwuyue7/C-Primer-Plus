// T3
// 编写一个程序，它要求用户首先输入其名，然后输入其姓；
// 然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
// 请使用char数组和头文件cstring中的函数。下面是该程序运行时的情形：
// Enter your first name: Flip
// Enter your last name: Fleming
// Here's the information in a single string: Fleming, Flip

#include <iostream>
#include <cstring>

int main(){
	using namespace std;
	char first_name[20], last_name[20], full_name[40];
	
	cout << "Enter your first name:"; 
	cin >> first_name;
	cout << "Enter your last name:";
	cin >> last_name;
	
	strcpy(full_name, first_name);
	strcat(full_name, ", ");
	strcat(full_name, last_name);
	
	cout << "Here's the information in a single string: " << full_name <<endl;
	return 0;
}
