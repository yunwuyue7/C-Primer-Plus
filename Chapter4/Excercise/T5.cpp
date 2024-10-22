// T5
// 结构CandyBar包含3个成员。第一个成员存储了糖块的品牌；第二个成员存储糖块的重量（可以有小数）；
// 第三个成员存储了糖块的卡路里含量（整数）。请编写一个程序，声明这个结构，
// 创建一个名为snack的CandyBar变量，并将其成员分别初始化为“Mocha Munch”、2.3和350。
// 初始化应在声明snack时进行。最后，程序显示snack变量的内容。

#include <iostream>

int main(){
	using namespace std;
	
	struct CandyBat{
		char brand[20];
		float weight;
		int carlories;
	};
	
   CandyBat snack{
		"Mocha Munch",
		2.3,
		350
	};
	
	cout << "The brand of snack is " << snack.brand << endl;
	cout << "The weight of snack is " << snack.weight << endl;
	cout << "The carlories of snack is " << snack.carlories;
	
	return 0;
}
