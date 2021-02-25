#include <iostream>

using namespace std;

// dp[n] = 3 * dp[n-2] + 2 * (sigma i = 1 ~ n/2, (n-2*i))

int main()
{
	int N;
	cin >> N;

	int dp[31] = { 0 };

    dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;

	for (int i = 3; i <= N; i++)
	{
		dp[i] = 3 * dp[i - 2];

		for (int j = 3; j <= i; j++)
		{
			if (i % 2 == 0)
				dp[i] = dp[i] + 2 * dp[i - j];
		}
	}

	cout << dp[N];
}