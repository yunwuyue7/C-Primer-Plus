//testin3.cpp -- reading chars to end of file
#include <iostream>
int main(){
	using namespace std;
	
	int count = 0;
	char ch;
	cin.get(ch);
	
	while(cin.fail() == false){
		cout << ch;
		++count;
		cin.get(ch);
	}
	
	cout << endl << count << " characters read\n";
	return 0;
} 
