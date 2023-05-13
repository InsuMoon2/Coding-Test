#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

// N과 M (3). 백트래킹

using namespace std;

int N, M;
int arr[9];
bool visited[9];

void DFS(int count)
{
	if (count == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		visited[i] = true;
		arr[count] = i;
		DFS(count + 1);
		visited[i] = false;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	cin >> N >> M;
	DFS(0);

    return 0;
}

