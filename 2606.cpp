#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 100;
int checked[100];
vector<int> checked_v[101];

int infected = 0;

void BFS(int start)
{
	queue<int> q;
	q.push(start);
	checked[start] = true;

	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		// cout << x;
		infected++;

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

void Initialize(int number_of_computer)
{
	number = number_of_computer;
}

int main()
{
	int temp_1, temp_2, number_of_link;

	cin >> temp_1 >> number_of_link;

	Initialize(temp_1);

	for (int i = 0; i < number_of_link; i++)
	{
		cin >> temp_1 >> temp_2;

		checked_v[temp_1].push_back(temp_2);
		checked_v[temp_2].push_back(temp_1);
	}
	BFS(1);

	cout << infected - 1;
}
