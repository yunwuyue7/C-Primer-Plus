//T1
// 编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）所有整数的和。
// 这里假设先输入较小的整数。例如，如果用户输入的是2和9，则程序将指出2～9之间所有整数的和为44。
#include <iostream>

int main(){
	using namespace std;
	
	int first_int, second_int;
   int sum = 0;
	
	cout << "Please enter the first integer (smaller):";
	cin >> first_int;
	cout << "Please enter the second integer (bigger):";
	cin >> second_int;
	
	for (int num = first_int; num <= second_int; num++){
		sum += num;
	}
	
	cout << "The sum of integer between " << first_int << " and " << second_int << " is: " << sum << endl;
	return 0;
}
