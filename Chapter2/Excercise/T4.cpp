//T4
/*编写一个程序，让用户输入其年龄，
然后显示该年龄包含多少个月，如下所示： 
Enter your age:29*/

#include <iostream>
int main(){
	using namespace std;
	int age;
	
	cout << "Please enter your age: " << endl;
	cin >> age;
	cout << "Your age contains " << 12 * age << " month";
	
	return 0;
}
