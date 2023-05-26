#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

// 여행 가자

const int MAX = 201;

int N, M;
int Parent[MAX];

int Find(int x)
{
	if (Parent[x] == x)
		return x;

	return Parent[x] = Find(Parent[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);

	if (x == y)
		return;

	Parent[x] = y;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >>  N >> M;

	for (int i = 1; i <= N; i++)
	{
		Parent[i] = i;
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			int input;
			cin >> input;

			if (input == 1)
			{
				Union(i, j);
			}
		}
	}

	int root;

	for (int i = 0; i < M; i++)
	{
		int input;
		cin >> input;

		if (i == 0)
			root = Find(input);

		else
		{
			// Find 값이 같지 않으면 No
			if (Find(root) != Find(input))
			{
				cout << "NO";
				return 0;
			}
		}
	}

	cout << "YES";

	return 0;
}