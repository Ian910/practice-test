#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	for (int i = 2; i <= 9 ; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			cout << i << "*" << j << "=" << i * j<<"\t";
		}
		cout << endl;
	}
	

	 


	system("pause");
	return 0;
}