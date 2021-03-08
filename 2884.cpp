#include <iostream>
using namespace std;

int main() 
{
	int h = 0, m = 0;
	cin >> h >> m;

	if (m - 45 < 0) {
		m = 60 + (m - 45);
		h -= 1;
	}
	else
		m -= 45;
	
	if (h < 0)	
		h = 23;
	
	cout << h << " " << m;
}