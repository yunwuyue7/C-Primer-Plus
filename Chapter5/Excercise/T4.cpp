// T4
// Daphne以10%的单利投资了100美元。也就是说，每一年的利润都是投资额的10%，即每年10美元：（利息 = 0.10×原始存款）
// 而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款（包括获得的利息）的5%，：利息 = 0.05×当前存款
// Cleo在第一年投资100美元的盈利是5%—得到了105美元。下一年的盈利是105美元的5%—即5.25美元，依此类推。
// 请编写一个程序，计算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时两个人的投资价值。

#include<iostream>
#include<string>

int main(){
	using namespace std;
	
	const int PRINCIPAL = 100;
	const float SIMPLE_INTEREST_RATE = 0.1, COMPOUND_INTEREST_RATE = 0.05;
	
	int year = 1;
	float simple_interest = PRINCIPAL + PRINCIPAL * SIMPLE_INTEREST_RATE;
	float compound_interest = PRINCIPAL * (1 + COMPOUND_INTEREST_RATE);
	
	while(simple_interest >= compound_interest){
		year += 1;
		simple_interest += PRINCIPAL * SIMPLE_INTEREST_RATE;
		compound_interest *= (1 + COMPOUND_INTEREST_RATE);
	}
   
	cout << "After " << year << " years, Cleo's investment value exceed Daphne's." << endl;
	cout << "This year, the investment value of Daphne is " << simple_interest << " while Cleo's is " << compound_interest << endl;
	
	return 0;
}
