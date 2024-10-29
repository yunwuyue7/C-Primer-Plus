// T3
// 编写一个要求用户输入数字的程序。每次输入后，
// 程序都将报告到目前为止，所有输入的累计和。当用户输入0时，程序结束。

#include <iostream>

int main(){
	using namespace std;
	float cur_num, cur_sum;
	
	cout << "Enter a number to calculate the current sum (0 to end): ";
	cin >> cur_num;
	cur_sum = 0;
	
	while(cur_num != 0){
		cur_sum += cur_num;
		cout << "The current total sum is " << cur_sum << endl;
		cout << "Enter a number to calculate the current sum (0 to end): ";
		cin >> cur_num;
	}
	
	cout << "You enter 0, and the program is end.";
	return 0;
}
