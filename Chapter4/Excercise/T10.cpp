// T10
// 编写一个程序，让用户输入三次40码跑的成绩（如果您愿意，也可让用户输入40米跑的成绩），并显示次数和平均成绩。
// 请使用一个array对象来存储数据（如果编译器不支持array类，请使用数组）。

#include <iostream>
#include <array>

int main() {
	using namespace std;
	
	// 使用 std::array 存储三次成绩
	std::array<float, 3> times;
	
	// 提示用户输入成绩
	for (size_t i = 0; i < times.size(); ++i) {
		cout << "请输入第 " << (i + 1) << " 次40码跑的成绩（秒）: ";
		cin >> times[i];
	}
	
	// 计算总和
	float sum = 0;
	for (const auto& time : times) {
		sum += time;
	}
	
	// 计算平均值
	float average = sum / times.size();
	
	// 显示次数和平均成绩
	cout << "输入的成绩如下：" << endl;
	for (size_t i = 0; i < times.size(); ++i) {
		cout << "第 " << (i + 1) << " 次成绩: " << times[i] << " 秒" << endl;
	}
	cout << "平均成绩: " << average << " 秒" << endl;
	
	return 0;
}
