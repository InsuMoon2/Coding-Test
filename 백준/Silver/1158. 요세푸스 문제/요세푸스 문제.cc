#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

#define M 1234567891

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    queue<int> que;

    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        que.push(i);
    }

    cout << "<";

    while (que.size() > 1)
    {
	    for (int i = 1; i < K; i++)
	    {
            int temp = que.front();
            que.pop();
            que.push(temp);
	    }

        cout << que.front() << ", ";
        que.pop();
    }
	
    cout << que.front() << ">";

	return 0;
}