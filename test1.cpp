#include <iostream>
using namespace std;

int main()
{
	string A;
	for (int i = 1; i <= 3; i++)
	{
		cout << "�п�J��" << i << "����W�̪��O��\n";
		cin >> A;
	}
	for (int J = 1; J <= 3; J++)
	{
		cout << "�m�W\t�s��\t�O��\n" << A << "\t" << J << "\t"<< 20000 + 100 * J<<"\n";
	}
	




	system("pause");
	return 0;
}