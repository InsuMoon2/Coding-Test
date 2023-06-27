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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long N, M;
	long long start = 0;
	long long mid, end;

	cin >> N >> M;

	vector<long long> tree(N);

	for (int i = 0; i < N; i++)
	{
		cin >> tree[i];
	}
	end = *max_element(tree.begin(), tree.end());

	while (start <= end)
	{
		long long Height = 0;
		mid = (start + end) / 2;

		for (int i = 0; i < N; i++)
		{
			if (tree[i] - mid > 0)
				Height += (tree[i] - mid);
		}

		if (Height < M) 
			end = mid - 1;

		else
			start = mid + 1;
	}

	cout << end;
	
	
	return 0;
}