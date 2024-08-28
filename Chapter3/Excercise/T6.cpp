// T6
// 编写一个程序，输入驱车里程（英里）和使用汽油量（加仑），
// 输出汽车耗油量为一加仑的里程。
// 然后输出欧洲风格的结果—即每100公里的耗油量（升）

#include <iostream>
int main(){
	using namespace std;
	
	float mile, fuel_consum, mile_per_gallon, fuel_per_hundred_km;
	
	cout << "Please enther your driving distance in mile: ";
	cin >> mile;
	cout << "Please enter the fuel consumption: ";
	cin >> fuel_consum;
	
	mile_per_gallon = mile / fuel_consum;
	fuel_per_hundred_km = fuel_consum / mile * 100;
	
	cout << "Your car can travel "<< mile_per_gallon << " on 1 gallon fuel." << endl;
	cout << "Your car consumes  " << fuel_per_hundred_km << " of fuel to travel 100 KM.";
	
	return 0;
}
