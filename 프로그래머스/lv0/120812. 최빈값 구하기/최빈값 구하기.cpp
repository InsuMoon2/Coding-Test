#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

// 최빈값 구하기

using namespace std;

int solution(vector<int> array)
{
	int answer = 0;

	unordered_map<int, int> umap;

	for (int vec : array)
	{
		umap[vec]++;
	}

	int maxFre = 0;

	int count = 0;

	for (auto pair : umap)
	{
		cout << pair.first << " " << pair.second << endl;

		if (pair.second > maxFre)
		{
			maxFre = pair.second;
			answer = pair.first;

			count = 1;
		}

		else if (pair.second == maxFre)
		{
			count++;

			answer = -1;
		}
	}

	return answer;
}

int main()
{
	vector<int> vec{ 1,2,3,3,3,4 };

	solution(vec);

	return 0;
}