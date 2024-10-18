// T7 
// 编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），
// 然后将其转换为美国风格的耗油量—每加仑多少英里。
// 注意，美国方法（距离/燃料）与欧洲方法（燃料/距离）相反。
// 单位换算：100公里等于62.14英里，1加仑等于3.875升。

#include <iostream>
int main(){
	using namespace std;
	
	float fuel_per_100km, mile_per_gallon;
	const float LITER_PER_GALLON = 3.875;
	const float MILE_TO_KILOMETER = 0.6214;
	
	cout << "Please enter your car's fuel consumption per 100KM: ";
	cin >> fuel_per_100km;
	
	mile_per_gallon =  100 / fuel_per_100km * LITER_PER_GALLON * MILE_TO_KILOMETER;
	cout << "Your car can drive " << mile_per_gallon << " mile per gallon fuel.";
	
	return 0;
}
