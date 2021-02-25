#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair <int, int> a, pair <int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, temp1, temp2;
	int end_time = 0;
	int count = 0;	

	cin >> N;

	vector <pair <int, int> > pair_vec;
	
	for (int i = 0; i < N; i++)
	{
		cin >> temp1 >> temp2;
		pair_vec.push_back({ temp1, temp2 });
	}

	sort(pair_vec.begin(), pair_vec.end(), compare);

	for (int i = 0; i < N; i++)
	{
		// 회의 종료 지점이 다음 회의 시작지점보다 작으면
		if (end_time <= pair_vec[i].first)
		{
			end_time = pair_vec[i].second;
			count++;
		}
	}
	 cout << count;
}
