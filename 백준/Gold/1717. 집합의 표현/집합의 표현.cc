#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

// 집합의 표현

int n, m;
int Parent[1'000'001];

int getParent(int x)
{
	// X가 Root면 , 그대로 반환한다.
	if (Parent[x] == x) 
		return x;
	// X가 자식 노드일 경우, 부모 노드에 대해 재귀실행한다.
	return Parent[x] = getParent(Parent[x]);
}

void UnionParent(int a, int b)
{
	// a, b 정점의 최상위 정점을 각각 찾는다. (속한 트리의 루트 노드를 찾는다.)
	a = getParent(a);
	b = getParent(b);

	if (a > b)
		Parent[a] = b;
	else 
		Parent[b] = a;
}

void FindParent(int a, int b)
{
	a = getParent(a);
	b = getParent(b);

	if (a == b)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		Parent[i] = i;
	}

	for (int i = 0; i < m; i++)
	{
		int o, a, b;
		cin >> o >> a >> b;


		if (!o) // Union 연산
		{

			UnionParent(a, b);
		}

		else // Find 연산
		{
			FindParent(a, b);
		}
	}

	return 0;
}