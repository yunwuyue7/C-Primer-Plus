//T5
/*其中的 main( )调用一个用户定义的函数
（以摄氏温度值为参数，并返回相应的华氏温度值）。
该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
Please enter a Celsius value:20
20 degrees Celsius is 68 degrees Fahrenheit.*/

#include <iostream>
int main(){
	using namespace std;
	float cel_temp;
	
	cout << "Please enter a Celsius value: ";
	cin >> cel_temp;
	cout << cel_temp << " degrees Celsius is " << 1.8 * cel_temp + 32.0 << " Fahrenheit.";

	return 0;
}
