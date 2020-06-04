#include <iostream>
using namespace std;

int main()
{
	string A;
	for (int i = 1; i <=3; i++)
	{
		cout << "\n請輸入第" << i << "位報名者的費用";
		cin >> A;
		cout << "\n姓名\t編號\t費用\n";
		cout <<"\n"<< A << "\t" << i << "\t"<< 19900 + 100 * i<<endl;
	}
	
	




	system("pause");
	return 0;
}