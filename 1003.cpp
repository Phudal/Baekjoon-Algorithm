#include <iostream>

using namespace std;

long long zero[41];
long long one[41];
long long sum[41];

int dp(int n, int target)
{
	if (sum[n] != 0)
		return sum[n];
	if (n == 0)
	{
		zero[target]++;
		return 0;
	}
	if (n == 1)
	{
		one[target]++;
		return 1;
	}

	int sum1, sum2;
	if (sum[n - 1] > 0)
	{
		sum1 = sum[n - 1];
		zero[target] = zero[target] + zero[n - 1];
		one[target] = one[target] + one[n - 1];
	}
	else
		sum1 = dp(n - 1, target);

	if (sum[n - 2] > 0)
	{
		sum2 = sum[n - 2];
		zero[target] = zero[target] + zero[n - 2];
		one[target] = one[target] + one[n - 2];
	}
	else
		sum2 = dp(n - 2, target);
	
	return sum[target] = sum1 + sum2;
}

int main()
{
	int testcase;
	cin >> testcase;

	while (testcase--)
	{
		int N;
		cin >> N;

		for (int i = 0; i <= 40; ++i)
		{
			zero[i] = 0;
			one[i] = 0;
			sum[i] = 0;
		}
		
		for (int i = 0; i <= N; ++i)
			dp(i, i);			
		
		cout << zero[N] << " " << one[N] << endl;
	}
}