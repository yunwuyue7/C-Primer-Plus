//T6
/*编写一个程序，该程序按下面的格式要求用户输入光年值，
并返回对应天文单位的值。*/

#include <iostream>

int main(){
	using namespace std;
	double light_year;
	
	cout << "Enter the number of light years: ";
	cin >> light_year;
	cout << light_year << " light years = " << light_year * 63240 << " astronomical units.";
	
	return 0;
}


