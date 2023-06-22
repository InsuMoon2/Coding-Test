#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int NextNumber(int number, int p)
{
	int nextNumber = 0;

	while (number > 0)
	{
		int value = number % 10;
		nextNumber += pow(value, p);
		number /= 10;
	}

	return nextNumber;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int A, P;
	cin >> A >> P;

	vector<int> vec;
	int answer = 0;

	// 맨 처음 값 57 입력
	vec.push_back(A);

	while (true)
	{
		int next = NextNumber(vec.back(), P);
		
		for (int i = 0; i < vec.size(); i++)
		{
			if (vec[i] == next)
			{
				answer = i;
				goto stop;
			}
		}

		vec.push_back(next);
	}

	stop:

	cout << answer << endl;

	return 0;
}