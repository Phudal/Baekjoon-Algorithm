#include <iostream>

using namespace std;

int main()
{
	int N;
	int sum = 0;	
	cin >> N;
	
	for (int i = 0; i <= N / 3; i++)
	{
		sum = 0;
		int tmp = N;
		tmp = tmp - (i * 3);
		if (tmp % 5 == 0)
		{
			sum = i + tmp / 5;
			break;
		}
		else
			sum = -1;
	}
	cout << sum;
}