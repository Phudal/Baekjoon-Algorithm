
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair <int, int> a, pair <int, int> b)
{
	return a.first < b.first;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, N;
	int temp1, temp2;

	vector <pair <int, int>> score;
	vector <int> result;

	cin >> T;

	for (int testcase = 0; testcase < T; testcase++)
	{
		cin >> N;

		for (int i = 0; i < N; i++)
		{			
			cin >> temp1 >> temp2;
			score.push_back({ temp1, temp2 });
		}

		sort(score.begin(), score.end(), compare);
		int count = N;
		int bound = score.front().second;

		for (int j = 0; j < N; j++)
		{
			if (score.at(j).second > bound)
				count--;		

			bound = bound > score.at(j).second ? score.at(j).second : bound;
			// if (bound > score.at(j).second)
			//  	bound = score.at(j).second;
		}
		result.push_back(count);
		
		score.clear();
	}
	for (int i = 0; i < result.size(); i++)
		cout << result.at(i) << " ";
}