//T1
// 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），
// 然后将身高转换为英尺和英寸。该程序使用下划线字符来指示输入位置。
// 另外，使用一个const符号常量来表示转换因子。
#include <iostream>

int main(){
	using namespace std;
	const int TRANS_FACTOR = 12;
	int height_raw;
	
	cout << "Please enter your height in inch: __\b\b";
	cin >> height_raw;
	int height_foot = height_raw / TRANS_FACTOR;
	int height_inch = height_raw % TRANS_FACTOR;
	cout << "Your height is " << height_foot << " foot and " << height_inch << " inch.";
}
