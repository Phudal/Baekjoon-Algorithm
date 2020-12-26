#include <iostream>

using namespace std;

int main() 
{
	int i_100 = 0, i_10 = 0, i_1 = 0;
	int n;
	int count = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++) 
	{
		if (i >= 100) 
		{
			i_100 = i / 100;
		}
		if (i >= 10) 
		{
			i_10 = (i - i_100 * 100) / 10;
		}
		i_1 = i % 10;
		if ((i_100 - i_10) == (i_10 - i_1) || (i_1 - i_10) == (i_10 - i_100) || (i_100 == 0))		
			count++;
		
		i_100 = i_10 = 0;
	}
	cout << count;
}