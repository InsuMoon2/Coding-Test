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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> armor(N);
    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> armor[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
	    for (int j = i + 1; j < N; j++)
	    {
		    if (armor[i] + armor[j] == M)
		    {
                cnt++;
		    }
	    }
    }

    cout << cnt << endl;

	return 0;
}