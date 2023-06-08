#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>

using namespace std;

int arr[100'001] = {};

int binary_search(int arr[], int target, int start, int end)
{
	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (arr[mid] == target)
		{
			return 1;
		}

		else if (arr[mid] > target)
		{
			end = mid - 1;
		}

		else if (arr[mid] < target)
		{
			start = mid + 1;
		}
	}

	return 0; // 찾지 못했을 때
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	cin >> M;

	for (int j = 0; j < M; j++)
	{
		int target;
		cin >> target;

		cout << binary_search(arr, target, 0, N - 1) << "\n";
	}


	return 0;
}