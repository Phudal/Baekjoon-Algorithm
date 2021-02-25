#include <iostream>

using namespace std;

// dp[n] = dp[n-2] + dp[n-1]

int dp[1000001] = { 0 };

int main()
{
	int n;
	cin >> n;
;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
	}
	cout << dp[n] << endl;
}
