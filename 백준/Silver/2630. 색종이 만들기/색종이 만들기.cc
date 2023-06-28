#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int N;
int paper[128][128];
int blue, white;

void solution(int y, int x, int size)
{
	int check = paper[y][x];

	for (int i = y; i < y + size; i++)
	{
		for (int j = x; j < x + size; j++)
		{
			if (check == 0 && paper[i][j] == 1)
			{
				check = 2;
			}

			else if (check == 1 && paper[i][j] == 0)
			{
				check = 2;
			}

			if (check == 2)
			{
				solution(y, x, size / 2);
				solution(y, x + size / 2, size / 2);
				solution(y + size / 2, x, size / 2);
				solution(y + size / 2, x + size / 2, size / 2);

				return;
			}
		}
	}

	if (check == 0)
	{
		white++;
	}

	else
	{
		blue++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> paper[i][j];

	solution(0, 0, N);
	cout << white << endl;
	cout << blue;

	
	return 0;
}