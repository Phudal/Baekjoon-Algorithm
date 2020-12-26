#include <iostream>
#include <cstring>

using namespace std;

int get_dif(char* a, char* b, int start)
{	
	int diff = 0;

	for (int t = 0; t < strlen(a); t++)
	{
		if (a[t] != b[t + start])
			diff++;
	}

	return diff;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char A[51];
	char B[51];

	int diff, lenA, lenB, position, temp;

	cin >> A >> B;

	lenA = strlen(A);
	lenB = strlen(B);
	diff = get_dif(A, B, 0);

	for (int i = 0; i < lenB - lenA + 1; i++)
	{
		temp = get_dif(A, B, i);
		if (temp < diff)
		{
			diff = temp;
			position = i;
		}
	}

	cout << diff;
}