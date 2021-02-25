#include <iostream>

#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

using namespace std;

int dp[1000001] = { 0 };

int main()
{
	int N;
	
	cin >> N;

	for (int index = 2; index <= N; index++)
	{
		dp[index] = dp[index - 1] + 1;
		if (index % 2 == 0)
			dp[index] = MIN(dp[index], dp[index / 2] + 1);
		if (index % 3 == 0)
			dp[index] = MIN(dp[index], dp[index / 3] + 1);
	}
	cout << dp[N];
}