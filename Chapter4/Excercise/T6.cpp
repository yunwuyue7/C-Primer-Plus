// T6
// 结构 CandyBar 包含 3 个成员，如编程练习 5 所示。请编写一个程序，
// 创建一个包含 3 个元素的CandyBar数组，并将它们初始化为所选择的值，然后显示每个结构的内容。

#include <iostream>

struct CandyBat{
	char brand[20];
	float weight;
	int calories;
};

int main(){
	using namespace std;
	
	CandyBat chocolate{
		"Meiji",
		1.2,
		280
	};
	
	cout << "The brand of snack is " << chocolate.brand << endl;
	cout << "The weight of snack is " << chocolate.weight << endl;
	cout << "The carlories of snack is " << chocolate.calories;
	
	return 0;
}
