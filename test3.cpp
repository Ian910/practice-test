#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "請輸入今年收入淨額:";
	cin >> number;
	if (number >= 2000000)
	{
		cout << "付稅金額" << (0.3 * number) << "元";
	}
	else if (number >= 1000000 && number < 2000000)
	{
		cout << "付稅金額" << (0.21 * number) << "元";
	}
	else if (number >= 600000 && number < 1000000)
	{
		cout << "付稅金額" << (0.13 * number) << "元";
	}
	else if (number >= 300000 && number < 600000)
	{
		cout << "付稅金額" << (0.06 * number) << "元";
	}
	else
	{
		cout << "付稅金額:0元";
	} 





	system("pause");
	return 0;
}
