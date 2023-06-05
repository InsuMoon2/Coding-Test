#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <utility>

using namespace std;

int DP[501][501];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, Max = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> DP[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				DP[i][j] = DP[i - 1][j] + DP[i][j];
			}

			else if (j == i)
			{
				DP[i][j] = DP[i - 1][j - 1] + DP[i][j];
			}

			else
			{
				DP[i][j] = max(DP[i - 1][j - 1] + DP[i][j], DP[i - 1][j] + DP[i][j]);
			}

			Max = max(DP[i][j], Max);
		}
	}

	cout << Max << endl;

	return 0;
}