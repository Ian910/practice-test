#include <iostream>
using namespace std;

int main()
{
	int c = 0;
	char sentence[3][100];

	for (int i = 0; i < 3; i++)
	{   
		cout << "�п�J��" << i + 1 << "�ӥy�l:";
		gets_s(sentence[i]);

		int sizeRow = sizeof(sentence[i]);
		for (int j = 0; j < sizeRow; j++)
		{
			
			if (sentence[i][j] == '\0')
			{
				break;
			}
			else
			{
				c++;
			}
		}
	}
	cout << "�`�@��J" << c << "�Ӧr��";

	return 0;
}