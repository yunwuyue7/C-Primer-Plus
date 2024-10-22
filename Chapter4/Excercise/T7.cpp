// T7 
// William从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
// 1.披萨饼公司的名称，可以有多个单词组成; 2.披萨饼的直径; 3.披萨饼的重量。
// 请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。
// 程序将请求用户输入上述信息，然后显示这些信息。请使用cin（或它的方法）和cout。

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
