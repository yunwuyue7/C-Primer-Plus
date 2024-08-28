//T2
/*编写一个C++程序，它要求用户输入一个以long为单位的距离，
然后将它转换为码（一long等于220码）。*/
#include <iostream>

int main(){
	using namespace std;
	float dist;
	
	cout <<  "Please enter the distance in long: ";
	cin >> dist;
	cout << "This distance is " << dist * 220 << " in yard";
	
	return 0;
}
