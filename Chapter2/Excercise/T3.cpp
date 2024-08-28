//T3
/*编写一个C++程序，它使用3个用户定义的函数（包括main( )），
并生成下面的输出：
Three blind mice
Three blind mice
See how they run
See how they run */

#include <iostream>
void func_1();
void func_2();

int main(){
	using namespace std;
	func_1();
	func_1();
	func_2();
	func_2();
	
	return 0;
}

void func_1(){
	using namespace std;
	cout << "Three blind mice" << endl;
}

void func_2(){
	using namespace std;
	cout << "See how they run" << endl;
}

