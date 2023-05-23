#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	queue<int> que;
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		que.push(i);
	}

	while (que.size() > 1)
	{
		que.pop();
		que.push(que.front());
		que.pop();
	}

	cout << que.front() << endl;


	return 0;
}