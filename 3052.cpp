#include <iostream>
using namespace std;

int main()
{	
	int arr[10] = { 0 };
	int count = 0;
	int re_arr[42] = { 0 };
	
	for (int i = 0; i < 10; i++) 
	{
		cin >> arr[i];
		re_arr[arr[i] % 42]++;		
	}
	
	for (int i = 0; i < 42; i++) 
	{
		if (re_arr[i] != 0)
			count++;
	}

	cout << count;
}
