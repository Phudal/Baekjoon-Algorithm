#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int N;
	int count = 0;
	int num = 666;
	string str_num;
	cin >> N;

	while (true)
	{
		if (to_string(num).find("666") != -1)
			count++;		
		if (count == N)
			break;
		num++;
	}
	cout << num;
}
