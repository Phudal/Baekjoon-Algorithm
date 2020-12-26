#include <iostream>

using namespace std;

int main() 
{
	int N = 0, M = 0;
	int colorCount = 0;
	int wCount = 0;
	int bCount = 0;

	bool _ColorStack = true;

	cin >> N >> M;

	int min_colorCount = N * M;

	char** Chess = new char* [N];

	for (int i = 0; i < N; i++) 
		Chess[i] = new char[M];
	

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> Chess[i][j];
	}


	for (int x = 0; x <= N - 8; x++)
	{
		for (int y = 0; y <= M - 8; y++)
		{
			wCount = 0;
			bCount = 0;
				// 만약 시작이 W 라면
			{
				_ColorStack = true;
				for (int i = x; i < x + 8; i++)
				{
					for (int j = y; j < y + 8; j++)
					{
						if (_ColorStack)	// W가 칠해져야 할 차례
						{
							if (Chess[i][j] != 'W')
								colorCount++;
						}
						else				// B가 칠해져야 할 차례
						{
							if (Chess[i][j] == 'W')
								colorCount++;
						}
						_ColorStack = !_ColorStack;
					}
					_ColorStack = !_ColorStack;
				}
				wCount = colorCount;
				colorCount = 0;
			}

			
			{
				_ColorStack = false;
				for (int i = x; i < x + 8; i++)
				{
					for (int j = y; j < y + 8; j++)
					{
						if (!_ColorStack)	// B가 칠해져야 할 차례
						{
							if (Chess[i][j] != 'B')
								colorCount++;
						}
						else				// W가 칠해져야 할 차례
						{
							if (Chess[i][j] == 'B')
								colorCount++;
						}
						_ColorStack = !_ColorStack;
					}
					_ColorStack = !_ColorStack;
				}
				bCount = colorCount;
				colorCount = 0;
			}

			if (wCount >= bCount)
				colorCount = bCount;
			else
				colorCount = wCount;

			if (min_colorCount > colorCount)
				min_colorCount = colorCount;

			colorCount = 0;
		}
	}
	cout << min_colorCount;
}
