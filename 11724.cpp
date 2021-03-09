#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 1000;
int checked[1000];
vector<int> checked_v[1001];

void BFS(int start)
{
	queue<int> q;
	q.push(start);
	checked[start] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		// cout << x;

		for (int i = 0; i < checked_v[x].size(); i++)
		{
			int y = checked_v[x][i];
			if (!checked[y])
			{
				q.push(y);
				checked[y] = true;
			}
		}
	}
}

void initialize(int n)
{
	number = n;
}

int main()
{
	int temp_1, temp_2, N, M;

	int count_of_link = 0;

	cin >> N >> M;
	
	initialize(N);

	for (int i = 0; i < M; i++)
	{
		cin >> temp_1 >> temp_2;

		checked_v[temp_1].push_back(temp_2);
		checked_v[temp_2].push_back(temp_1);
	}	

	for (int i = 1; i <= N; i++)
	{
		if (checked[i] == true)
			continue;

		BFS(i);
		count_of_link++;
	}

	cout << count_of_link;
}
