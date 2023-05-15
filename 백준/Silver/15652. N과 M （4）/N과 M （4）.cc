#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

// N과 M (2)

using namespace std;

int N, M;
int arr[9];
bool visitied[9];

void DFS(int num, int count)
{
	if (count == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = num; i <= N; i++)
	{

		visitied[i] = true;
		arr[count] = i;
		DFS(i, count + 1);
		visitied[i] = false;
		
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;

    DFS(1, 0);

    return 0;
}

