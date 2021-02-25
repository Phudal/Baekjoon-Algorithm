#include <iostream>

using namespace std;

int RGB[1001][3];

// dp[i] = dp[i-1] + (r or g or b)
// -> dp를 세 개를 만들어 마지막에 비교한다

int main()
{
	int N;

	int RGBCost[3];
	
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> RGBCost[0] >> RGBCost[1] >> RGBCost[2];
		RGB[i][0] = min(RGB[i - 1][1], RGB[i - 1][2]) + RGBCost[0];
		RGB[i][1] = min(RGB[i - 1][0], RGB[i - 1][2]) + RGBCost[1];
		RGB[i][2] = min(RGB[i - 1][0], RGB[i - 1][1]) + RGBCost[2];
	}

	if (RGB[N][0] <= RGB[N][1] && RGB[N][0] <= RGB[N][2])
		cout << RGB[N][0];

	else if (RGB[N][1] <= RGB[N][2] && RGB[N][1] <= RGB[N][0])
		cout << RGB[N][1];

	else if (RGB[N][2] <= RGB[N][1] && RGB[N][2] <= RGB[N][0])
		cout << RGB[N][2];
	
	return 0;
}