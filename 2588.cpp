#include <iostream>
using namespace std;

int main() 
{
	int a = 0, b = 0;
	int b_1, b_10, b_100;
	cin >> a >> b;

	b_100 = b / 100;
	b_10 = (b - b_100 * 100) / 10;
	b_1 = b - b_100 * 100 - b_10 * 10;
	
	cout << a * b_1 << endl;
	cout << a * b_10 << endl;
	cout << a * b_100 << endl;
	cout << a * b;
}