#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string N, temp = "";
	int sum = 0;
	bool Isminus = false;

	cin >> N;
	
	for (int i = 0; i < N.size(); i++)
	{
		if (N.at(i) == '+' || N.at(i) == '-' || N.at(i) == '\0')
		{
			// 기호가 마이너스라면
			if (Isminus)
				sum = sum - stoi(temp);
			// 기호가 플러스라면
			else
				sum = sum + stoi(temp);
			
			// 초기화
			temp = "";

			if (N.at(i) == '-')
				Isminus = true;

			continue;
		}
		temp = temp + N.at(i);
	}
	// 기호가 마이너스라면
	if (Isminus)
		sum = sum - stoi(temp);
	// 기호가 플러스라면
	else
		sum = sum + stoi(temp);

	cout << sum;
}
