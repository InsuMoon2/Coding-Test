#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	vector<pair<int, int>> vec;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int begin, end;
		cin >> begin >> end;

		vec.emplace_back(make_pair(end, begin));
	}

	sort(vec.begin(), vec.end());

	//cout << endl;
	//for (auto asdf : vec)
	//{
	//	cout << asdf.first << " " << asdf.second << endl;
	//}
	//cout << endl;

	int time = vec[0].first;
	int result = 1;

	for (int i = 1; i < N; i++)
	{
		if (time <= vec[i].second)
		{
			result++;
			time = vec[i].first;
		}
	}

	cout << result;

	return 0;
}