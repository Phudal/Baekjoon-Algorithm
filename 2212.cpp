#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K;
	int temp;
	int result = 0;

	vector <int> sensor;
	vector <int> diff;

	cin >> N;
	cin >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		sensor.push_back(temp);
	}

	sort(sensor.begin(), sensor.end());

	for (int i = 0; i < N - 1; i++)
		diff.push_back(sensor.at(i + 1) - sensor.at(i));

	sort(diff.begin(), diff.end());
	
	for (int i = 0; i < N - K; i++)
		result = result + diff.at(i);

	cout << result;
}