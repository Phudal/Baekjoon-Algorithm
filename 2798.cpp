#include <iostream>

using namespace std;

int main() 
{
	int N = 0;
	int M = 0;
	int max_sum = 0;

	cin >> N >> M;
	
	int *Card_arr = new int[N];
	
	for (size_t i = 0; i < N; i++)
		cin >> Card_arr[i];

	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++)
		{
			if (j == i)
				continue;
			for (int k = 0; k < j; k++) 
			{
				if (j == k || i == k)
					continue;
				else if (Card_arr[i] + Card_arr[j] + Card_arr[k] > max_sum &&
					Card_arr[i] + Card_arr[j] + Card_arr[k] <= M)
					max_sum = Card_arr[i] + Card_arr[j] + Card_arr[k];
			}
		}
	}

	cout << max_sum;
}
