#include <iostream>
using namespace std;

int main()
{
	int sum=0,i,j, tem, a[] = { 67,28,94,83,65 };
	float ave=0;
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (a[i] < a[j])
			{
				tem = a[i];
				a[i] = a[j];
				a[j] = tem;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		sum += a[i];
	}
	ave = sum / 5;
	cout << "���ƥѤj�ܤp�Ƨ�:";
	for (i = 0; i < 5; i++)
	{
		cout << a[i]<<" ";
	}
	cout << "\n�`��:" << sum << "\n����:" << ave;
	

	system("pause");
	return 0;
}