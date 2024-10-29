// T2
// 使用array对象（而不是数组）和long double（而不是long long）
// 重新编写程序清单5.4，并计算100!的值。
#include <iostream>
#include <array>

int main(){
	using namespace std;
	array <long double, 99> factorial_arr = {1, 1};
	
	for (int i = 2; i < 100; i++)
		factorial_arr[i] = i * factorial_arr[i - 1];
	
	for (int i = 0; i < 16; i++)
		cout << i << "!= " << factorial_arr[i] << endl;
	
	cout << "100!= " << factorial_arr[99] << endl;
	return 0;
}
