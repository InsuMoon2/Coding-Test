#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    priority_queue<int, vector<int>, less<int>> pq;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;

        if (input == 0)
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

        else
        {
            pq.push(input);
        }
    }

	return 0;
}