#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "�п�J�@�Ӧr��:";
	cin >> ch;
	if (ch>='0'&&ch<='9')
	{
		cout << "��J���O�Ʀr!\n";
	}
	else if (ch>='A' && ch<='Z')
	{
		cout << "��J���O�j�g�r��!\n";
	}
	else if (ch>='a'&&ch<='z')
	{
		cout << "��J���O�p�g�r��!\n";
	}
	else
	{
		cout<<"��J�����O�Ʀr�Φr��!";
	}





	system("pause");
	return 0;
}