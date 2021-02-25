#include <iostream>
using namespace std;

int main()
{	
	int n = 0, M = 0;
	double result = 0;
	cin >> n;
	double *score = new double[n];

	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
		if (score[i] > M)
			M = score[i];		
	}
	
	for (int i = 0; i < n; i++) 
	{
		score[i] = score[i] / M * 100;
		result += score[i];
	}
	result = result / n;
	cout << result;
}