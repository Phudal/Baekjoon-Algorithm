#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, temp;
	int sum = 0;
	cin >> N;

	vector <int> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());
	
	for (int i = 0; i < N; i++)
	{
		if (sum < vec.at(i) * (N - i))
			sum = vec.at(i) * (N - i);
	}
	cout << sum;
}
