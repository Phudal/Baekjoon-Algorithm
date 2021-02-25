#include <iostream>
using namespace std;

int main()
{	
	int a = 0, b = 0, c = 0, result;
	int arr[10] = { 0 };
	int tmp = 0;

	cin >> a >> b >> c;
	result = a * b * c;

	while (true) 
	{
		tmp = result % 10;
		arr[tmp]++;
		if ((result / 10) > 0)
			result = result / 10;
		else
			break;
	}
	for (int i = 0; i < 10; i++) 	
		cout << arr[i] << "\n";
	
}
