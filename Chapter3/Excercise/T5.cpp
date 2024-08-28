// T5
// 编写一个程序，输入全球当前人口与美国当前人口（或其他国家人口）
// 将这些信息存储在long long变量中，并显示该国加人口占全球人口的百分比

#include <iostream>
int main(){
	using namespace std;
	
	long long world_population, us_population;
	float us_proportion;
	
	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the US's population: ";
	cin >> us_population;
	
	us_proportion = float(us_population) / world_population * 100;
	
	cout << "The population of the US is " << us_proportion << "% of the world population.";
    return 0;
}
