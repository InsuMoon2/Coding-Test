#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num;
	int N, sum = 0;
	cin >> N;

	vector<int> vec1;
	vector<int> vec2;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		vec1.push_back(num);
	}

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec2.push_back(num);
	}

	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end(), greater<>());

	for (int i = 0; i < N; i++)
	{
		sum += vec1[i] * vec2[i];
	}

	cout << sum;

	return 0;
}