#include <iostream>

using namespace std;

int main() 
{
	int N = 0;
	int count = 0;
	int sum = 0;
	cin >> N;
	int min_sum = N;


	for (int min_num = N; min_num > 0; min_num--)
	{
		int tmp = min_num;
		sum = 0;
		sum = sum + min_num;
		while (true)
		{
			if (min_num / 10 > 0)
			{
				sum = sum + (min_num % 10);
				min_num = min_num / 10;
			}
			else if (min_num / 10 < 10)
			{
				sum = sum + min_num;
				break;
			}
		}
		if (sum == N && tmp <= min_sum)
			min_sum = tmp;

		min_num = tmp;		
	}
	if (min_sum == N)
		min_sum = 0;

	cout << min_sum;

}
