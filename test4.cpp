#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "請輸入西元年份:";
	cin >> year;
	if (year%4==0)
	{
		if (year % 100 == 0 && year % 400 != 0)
		{
			cout << "西元" << year << "年為平年!\n";
		}
		else
		{
			cout << "西元" << year << "年為閏年!\n";
		}
	}
	else
	{
		cout << "西元" << year << "年為平年!\n";
	} 
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int year;
	printf( "請輸入西元年份:");
	scanf_s("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 == 0 && year % 400 != 0)
		{
			printf( "西元%d年為平年!\n",year);
		}
		else
		{
			printf("西元%d年為閏年!\n", year);
		}
	}
	else
	{
		printf("西元%d年為平年!\n", year);
	}
	system("pause");
	return 0;
}
