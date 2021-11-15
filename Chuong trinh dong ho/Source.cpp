#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int min, sec;
	cout << "nhap vao so phut: ";
	cin >> min;
	cout << "nhap vao so giay: ";
	cin >> sec;
	for (int i = min; i >= 0; i--)
	{
		if (i == min && i != 0)
		{
			for (int j = sec; j >= 0; j--)
			{
				if (j >= 10)
				{
					cout << "0" << i << ':' << j << endl;
				}
				else
				{
					cout << "0" << i << ':' << "0" << j << endl;
				}
			}
		}
		else if (i != min && i != 0)
		{
			for (int j = 59; j >= 0; j--)
			{
				if (j >= 10)
				{
					cout << "0" << i << ':' << j << endl;
				}
				else
				{
					cout << "0" << i << ':' << "0" << j << endl;
				}
			}
		}
		else if (i == 0)
		{
			for (int j = 59; j >= 0; j--)
			{
				if (j >= 10)
				{
					cout << "0" << i << ':' << j << endl;
				}
				else
				{
					if (j >= 1 && j <= 5) cout << "0" << i << ':' << "0" << j << " tich tac" << endl;
					else if (j == 0) cout << "0" << i << ':' << "0" << j << " reng reng reng" << endl;
					else cout << "0" << i << ':' << "0" << j << endl;
				}
			}
		}
	}
	return 0;
}