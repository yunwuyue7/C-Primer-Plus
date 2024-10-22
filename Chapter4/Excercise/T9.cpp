// T9
// 完成编程练习6，但使用new来动态分配数组，而不是声明一个包含3个元素的CandyBar数组。

#include <iostream>
#include <string>

struct CandyBat{
	std::string brand;
	float weight;
	int calories;
};

int main(){
	using namespace std;
	
	CandyBat* candyPtr = new CandyBat;

	candyPtr->brand = "Meiji"; // 注意这里使用strcpy，确保品牌名称不会超出数组大小
	candyPtr->weight = 1.2;
	candyPtr->calories = 280;
	
	cout << "The brand of snack is " << candyPtr->brand << endl;
	cout << "The weight of snack is " << candyPtr->weight << endl;
	cout << "The carlories of snack is " << candyPtr->calories;
	
	delete candyPtr;
	return 0;
}
