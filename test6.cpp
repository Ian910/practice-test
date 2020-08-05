#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	for (int i = 1; i <= 100 ; i=i+2)
	{
		sum += i;
		cout << i << "+";
	}
	cout << "=" << sum;
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i = i + 2)
	{
		sum += i;
		printf("%d + " ,i);
	}
	printf("=%d", sum);
	system("pause");
	return 0;
}
