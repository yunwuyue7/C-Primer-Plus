// T7 
// 设计一个名为car的结构，用它存储下述有关汽车的信息：生产商（存储在字符数组或string对象中的字符串）、生产年份（整数）。
// 编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建一个由相应数量的 car 结构组成的动态数组。
// 接下来，程序提示用户输入每辆车的生产商（可能由多个单词组成）和年份信息。请注意，这需要特别小心，
// 因为它将交替读取数值和字符串（参见第4章）。最后，程序将显示每个结构的内容。该程序的运行情况如下：

// --(in)--之后的部分为键盘输入
// How many cars do you wish to catalog? --(in)-- 2
// Car #1:
// Please enter the make:  --(in)-- Hudoson
// Please enter the year made: --(in)-- 1952
// Car #2:
// Please enter the make: --(in)-- Kaiser
// please enter the year made: --(in)-- 1951
// Here is your collection:
// 1952 Hudson Hornet
// 1951 Kaiser

#include <iostream>
#include <string>

using namespace std;

struct pizza_info{
	string company;
	float diameter;
	float weight;
};	

int main(){	
	pizza_info test_struct;
	
	cout << "Please enter the company name: ";
	getline(cin, test_struct.company);
	cout << "Please enter the diameter of pizza: ";
	cin >> test_struct.diameter;
	cout << "Please enter the weight of pizza: ";
	cin >> test_struct.weight;
	
	cout << endl;
	cout << "The company，diameter，weight of the test struct is: " << test_struct.company << ", " << test_struct.diameter << ", " << test_struct.weight;
	
	return 0;
}
