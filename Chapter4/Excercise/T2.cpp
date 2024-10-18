// T2
// 编写一个程序，要求以几英尺几英寸输入身高，并以磅为单位输入体重。
// (1)该程序输入为3个变量，输出为BMI。
// (2)将身高转换为以英寸为单位，再转换为以米为单位。
// (3)将体重转换为以千克为单位，用符号常量表示各种转换因子。
// (4)1 英尺=12 英寸；1 英寸=0.0254米；1千克=2.2磅；BMI：体重（千克）除以身高（米）的平方

#include <iostream>
#include <math.h>

int main(){
	using namespace std;

	const int FOOT_TO_INCH = 12;
	const float INCH_TO_METER = 0.0254;
	const float KILOGRAM_TO_POUND = 2.2;
	
	int height_raw_foot;
	int height_raw_inch;
	int weight_pound;
	
	cout << "Please enter your height, eg:5 foot 3 inch " << endl;
	cout << "First, enter the foot: _\b";
	cin >> height_raw_foot;
	cout << "Then, enter the inch: _\b";
	cin >> height_raw_inch;
	cout << "Last, enter your weight in pound: ";
	cin >> weight_pound;
	
	double height_meter = (height_raw_foot * FOOT_TO_INCH + height_raw_inch) * INCH_TO_METER;
	double weight_kilogram = weight_pound / KILOGRAM_TO_POUND;
	double BMI = weight_kilogram / pow(height_meter, 2);
	
	cout << "Your BMI is " << BMI;
	
	return 0;
}
