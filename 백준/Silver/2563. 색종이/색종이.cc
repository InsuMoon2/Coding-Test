#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	//가로 세로 크기가 각각 100인 정사각형
	//위에 가로, 세로 크기가 각각 10인 검은색 색종이를
	//색종이의 변과 도화지의 변이 평행하도록 붙인다.

	int T;
	int coord[101][101] = { 0, };
	int X, Y, result = 0;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> X >> Y;

		for (int i = Y; i < Y + 10; i++)
		{
			for (int j = X; j < X + 10; j++)
			{
				coord[i][j] = 1;
			}
		}
	}

	for (int i = 1; i < 101; i++)
	{
		for (int j = 1; j < 101; j++)
		{
			if (coord[i][j] == 1)
			{
				result++;
			}
		}
	}

	cout << result << endl;

	return 0;
}