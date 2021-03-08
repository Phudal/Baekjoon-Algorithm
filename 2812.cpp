#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K;
	// char str[500001];
	deque<char> deq;

	cin >> N >> K;
	
	char* str = new char[N];

	for (int i = 0; i < N; i++)
		cin >> str[i];

	for (int i = 0; i < N; i++)
	{
		while (K > 0 && !deq.empty() && deq.back() < str[i])
		{
			deq.pop_back();
			K--;
		}
		deq.push_back(str[i]);
	}
	
	for (int index = 0; index < deq.size() - K; index++)		
		cout << deq[index];		
	
}