// T8
// 编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。
// 随后，该程序指出用户输入了多少个单词（不包括done在内）。下面是该程序的运行情况：

// --(in)表示该行为键盘输入--
// Enter word (to stop, type the word done):
// (in)anteater birthday category dumpster
// (in)envy finagle geometry done for sure
// you entered a total of 7 words.

// 您应在程序中包含头文件cstring，并使用函数strcmp( )来进行比较测试。
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
