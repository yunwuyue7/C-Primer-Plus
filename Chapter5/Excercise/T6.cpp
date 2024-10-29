// T6
// 完成编程练习5，但这一次使用一个二维数组来存储输入—3年中每个月的销售量。
// 程序将报告每年销售量以及三年的总销售量。

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
