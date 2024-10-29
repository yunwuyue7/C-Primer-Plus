// T9
// 编写一个满足前一个练习中描述的程序，但使用string对象而不是字符数组。
// 请在程序中包含头文件string，并使用关系运算符来进行比较测试。

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
