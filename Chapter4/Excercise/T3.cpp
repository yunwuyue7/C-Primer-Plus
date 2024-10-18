// T3
// 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
// 以符号常量的方式表示：1度 = 60分，1分 = 60秒。
// 对于每个输入值，使用独立的变量存储。

#include <iostream>

int main(){
	using namespace std;
	const int DEGREE_TO_MINUTE = 60;
	const int MINUTE_TO_SECOND = 60;
	
	int degree, minute, second;
	float res;
	
	cout << "Enter a latitude in degrees, minutes, and seceonds: " << endl; 
	
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: " ;
	cin >> second;
	
	res = degree + float(minute) / DEGREE_TO_MINUTE + float(second) / MINUTE_TO_SECOND / DEGREE_TO_MINUTE;
	cout << degree << " degrees, " << minute << " minutes, " << second << "seconds = " << res << " degrees";
	
	return 0;
}
