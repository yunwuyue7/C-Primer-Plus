//T1
//编写一个C++程序，它显示您的姓名和地址。
#include <iostream>

int main(){
	using namespace std;
	
	char name[20];
	char addr[100];
	
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Your name is: "<< name << endl;
	
	cout << "Please enter your address: ";
	cin >> addr;
	cout << "Your address is:  "<< addr;
	
	return 0;
}

