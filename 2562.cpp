#include <iostream>
using namespace std;

int main()
{	
	int max, max_n = 1;
	int arr[9];
	
	for (int i = 0; i < 9; i++) 
	{
		cin >> arr[i];
		if (i == 0)
			max = arr[i];
		
		if (max < arr[i])
		{
			max = arr[i];
			max_n = i + 1;
		}
	}
	cout << max << "\n" << max_n;
}
