//T1
// 编写一个小程序，如下述输出示例所示的那样请求并显示信息：
// What is your first name? Betty Sue
// ...
// Name:Yewe, Betty Sue
// Grade:C
// Age:22
#include <iostream>

int main(){
	using namespace std;
	
	char first_name[40];
	char last_name[20];
	char grade;
	int age;
	
	cout << "What is your first name? ";
	cin.getline(first_name, 40);
	
	cout << "What is your last name? ";
	cin.getline(last_name, 20);
	
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	
	cout << "What is your age?";
	cin >> age;
	
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age;
}
