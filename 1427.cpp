#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int N;
	int arr[11];
	int i = 0;

	cin >> N;
	while (N > 0)
	{		
		arr[i] = N % 10;
		N = N / 10;
		i++;
	}
	sort(arr, arr + i, compare);
	for (int index = 0; index < i; index++)
		cout << arr[index];
}