#include <iostream>
using namespace std;

int main() 
{
	int a = 0;
	cin >> a;

	for (int N = 1; N < 10; N++) 	
		cout << a << " * " << N << " = " << a * N << endl;	
}