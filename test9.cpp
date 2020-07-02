#include <iostream>
using namespace std;

int main()
{
	int c = 0;
	char sentence[3][100];

	for (int i = 0; i < 3; i++)
	{   
		cout << "請輸入第" << i + 1 << "個句子:";
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
	cout << "總共輸入" << c << "個字元";

	return 0;
}