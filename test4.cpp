#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "�п�J�褸�~��:";
	cin >> year;
	if (year%4==0)
	{
		if (year % 100 == 0 && year % 400 != 0)
		{
			cout << "�褸" << year << "�~�����~!\n";
		}
		else
		{
			cout << "�褸" << year << "�~���|�~!\n";
		}
	}
	else
	{
		cout << "�褸" << year << "�~�����~!\n";
	} 





	system("pause");
	return 0;
}