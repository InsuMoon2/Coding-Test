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

	long long N, K;
	// 랜선 길이는 1이상
	long long start = 1;
	long long mid;
	long long end;

	cin >> K >> N;

	vector<long long> lan(K);

	for (int i = 0; i < K; i++)
	{
		cin >> lan[i];
	}

	end = *max_element(lan.begin(), lan.end());

	while (start <= end)
	{
		int answer = 0;
		mid = (start + end) / 2;

		// 중간으로 자르기
		for (int i = 0; i < K; i++)
		{
			answer += lan[i] / mid;
		}

		if (answer < N)
		{
			end = mid - 1;
		}

		else
		{
			start = mid + 1;
		}
	}

	cout << end << endl;
	
	return 0;
}