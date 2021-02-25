#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int count[8001] = { 0 };
	int* arr = new int[N];
	int sum = 0;
	int max = 0;
	int second = 0;
	bool Is_second = false;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
		count[arr[i] + 4000]++;
	}
	sort(arr, arr + N);

	for (int i = 0; i < 8001; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
			second = i - 4000;
			Is_second = false;
		}
		else if (count[i] == max && !Is_second)
		{
			second = i - 4000;
			Is_second = true;
		}
	}

	cout << round(sum / (double)N) << endl;
	cout << arr[N / 2] << endl;
	cout << second << endl;
	cout << arr[N - 1] - arr[0] << endl;
}