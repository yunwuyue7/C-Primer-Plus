//T7
/*编写一个程序，要求用户输入小时数和分钟数。
在main( )函数中，将这两个值传递给一个void函数*/

#include <iostream>
void output_time(int,int);

int main(){
	using namespace std;
	int hour;
	int minute;
	
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	output_time(hour, minute);
	
	return 0;
}

void output_time(int hour, int minute){
	using namespace std;
	cout << "Time: " << hour << ":"<< minute;
}
