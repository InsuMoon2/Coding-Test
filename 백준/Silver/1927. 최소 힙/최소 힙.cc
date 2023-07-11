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

    int N, x;
    //priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x;

        if (x != 0)
        {
            pq.push(x);
        }

        else
        {
	        if (pq.empty())
	        {
                cout << 0 << "\n";
	        }

	        else
	        {
                cout << pq.top() << "\n";
                pq.pop();
	        }
        }
        
    }
    


	return 0;
}