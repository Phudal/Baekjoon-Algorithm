#include <iostream>

using namespace std;

long long d[100];

long long dp(int num)
{
	if (num == 1)
		return 1;
	if (num == 2)
		return 1;
	if (d[num] != 0)
		return d[num];
	return d[num] = dp(num - 1) + dp(num - 2);
}

int main()
{
	long long N = 0;
	cin >> N;
	cout << dp(N);
}