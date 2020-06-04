#include <iostream>
using namespace std;

int main()
{
	string A;
	for (int i = 1; i <= 3; i++)
	{
		cout << "請輸入第" << i << "位報名者的費用\n";
		cin >> A;
	}
	for (int J = 1; J <= 3; J++)
	{
		cout << "姓名\t編號\t費用\n" << A << "\t" << J << "\t"<< 20000 + 100 * J<<"\n";
	}
	




	system("pause");
	return 0;
}