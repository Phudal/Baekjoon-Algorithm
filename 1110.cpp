#include <iostream>
using namespace std;

int main() 
{
	int prev_num = 0, num = 0, n_10 = 0, n_1 = 0;
	int count = 0;
	cin >> prev_num;
	num = prev_num;

	while (true) 
	{
		if (num < 10)
			n_10 = 0;
		else
			n_10 = num / 10;
		n_1 = num % 10;
		num = n_1 * 10 + ((n_10 + n_1) % 10);
		count++;
		if (prev_num == num)
			break;
	}
	cout << count;
}