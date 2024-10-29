// T10
// 编写一个使用嵌套循环的程序，要求用户输入一个值，指出要显示多少行。
// 然后，程序将显示相应行数的星号，其中第一行包括一个星号，第二行包括两个星号，
// 依此类推。每一行包含的字符数等于用户指定的行数，在星号不够的情况下，在星号前面加上句点。
// 该程序的运行情况如下：

// Enter number of rows: 5
// ....*
// ...**
// ..***
// .****
// *****

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
