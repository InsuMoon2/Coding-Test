#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

// 제곱수 판별하기

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}

	int max_Sum = vec[0];
	int current_Sum = vec[0];

	for (int i = 1; i < n; i++)
	{
 		current_Sum = max(vec[i], current_Sum + vec[i]);
		max_Sum = max(max_Sum, current_Sum);
	}

	cout << max_Sum << endl;

	return 0;
}