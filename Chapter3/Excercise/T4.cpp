// T4
// 编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储）
// 然后以天、小时、分钟和秒的方式显示这段时间。
// 使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。

#include <iostream>
int main(){
	using namespace std;
	
	const int HOURS_IN_DAY = 24;
	const int MINUTES_IN_HOUR = 60;
	const int SECONDS_IN_MINUTE = 60;
	long long seconds;
	int res_day, res_hour, res_minute, res_second;
	
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	
	res_second = seconds % SECONDS_IN_MINUTE;
	res_minute = seconds / SECONDS_IN_MINUTE % MINUTES_IN_HOUR;
	res_hour = seconds / SECONDS_IN_MINUTE / MINUTES_IN_HOUR % HOURS_IN_DAY;
	res_day = seconds / SECONDS_IN_MINUTE /MINUTES_IN_HOUR / HOURS_IN_DAY;
	
	cout << seconds << " seconds = " << res_day << " days, " << res_hour << " hours, " << res_minute << " minutes, " << res_second << " seconds ";
    return 0;
}
