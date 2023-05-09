#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(void)
{
	int N, M;
	string n_str, m_str;
	set<string> n;
	int result = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> n_str;
		n.insert(n_str);
	}

	for (int i =0; i < M; i++)
	{
		cin >> m_str;
		if (n.find(m_str) != n.end())
		{
			result++;
		}
	}

	cout << result;

}