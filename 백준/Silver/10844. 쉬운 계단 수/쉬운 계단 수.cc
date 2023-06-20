#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

const int MAX = 101;
const int MOD = 1'000'000'000;

int DP[MAX][10];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 1; i <= 9; i++)
	{
		DP[1][i] = 1;
	}
		
	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			// 0이면 1밖에 안된다.
			if (j == 0)
			{
				DP[i][j] = DP[i - 1][1];
			}

			// 9면 8밖에 안된다.
			else if (j == 9)
			{
				DP[i][j] = DP[i - 1][8];
			}

			else
			{
				DP[i][j] = DP[i-1][j-1] + DP[i-1][j+1];
			}

			DP[i][j] %= MOD;
		}
	}

	int sum = 0;
	for (int i = 0; i <= 9; i++)
	{
		sum = (sum + DP[N][i]) % MOD;
	}

	cout << sum << endl;

	return 0;
}