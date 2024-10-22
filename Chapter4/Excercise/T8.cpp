// T8
// 完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。
// 另外，让程序在请求输入比萨饼公司名称之前输入比萨饼的直径。

// 本题要求先输入比萨饼的直径，是由于以下特殊情况：
// 在用户输入完比萨饼的直径后，输入流中会留下一个换行符（\n），这是因为 cin >> 读取的是直到遇到空格或换行符之前的字符。
// 如果我们直接使用 getline(cin, pizzaPtr->company)，由于上一次输入留下了换行符，
// 这可能会导致 getline 读取空字符串，进而导致程序行为不符合预期
//（具体表现为用户还没有输入company，直接输出下一句"Please enter the weight of pizza: "）

#include <iostream>
#include <string>

using namespace std;

struct pizza_info{
	string company;
	float diameter;
	float weight;
};	

int main(){	
	pizza_info* pizzaPtr = new pizza_info;
	
	cout << "Please enter the diameter of pizza: ";
	cin >> pizzaPtr->diameter;
	cout << "Please enter the company name: ";
	cin.ignore(); // 忽略换行符。cin.ignore() 默认情况下忽略一个字符，默认是换行符。
	getline(cin, pizzaPtr->company);
	cout << "Please enter the weight of pizza: ";
	cin >> pizzaPtr->weight;
	
	cout << endl;
	cout << "The diameter，company，weight of the test struct is: " << pizzaPtr->diameter << ", " << pizzaPtr->company << ", " << pizzaPtr->weight;
	
	delete pizzaPtr;
	return 0;
}
