#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "�п�J���~���J�b�B:";
	cin >> number;
	if (number >= 2000000)
	{
		cout << "�I�|���B" << (0.3 * number) << "��";
	}
	else if (number >= 1000000 && number < 2000000)
	{
		cout << "�I�|���B" << (0.21 * number) << "��";
	}
	else if (number >= 600000 && number < 1000000)
	{
		cout << "�I�|���B" << (0.13 * number) << "��";
	}
	else if (number >= 300000 && number < 600000)
	{
		cout << "�I�|���B" << (0.06 * number) << "��";
	}
	else
	{
		cout << "�I�|���B:0��";
	} 





	system("pause");
	return 0;
}