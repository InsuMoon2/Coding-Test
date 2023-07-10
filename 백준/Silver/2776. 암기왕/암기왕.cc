#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_map>

using namespace std;

int temp;
unordered_map<int, int> Note1, Note2;

int check(int temp, vector<int> &v)
{
    int l = 0;
    int r = v.size() - 1;
    int mid;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (v[mid] > temp)
        {
            r = mid - 1;
        }

        else if(v[mid] == temp)
        {
            return 1;
        }

        else
        {
            l = mid + 1;
        }
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, N, M;
    cin >> T;

    while (T--)
    {
        vector<int> v;

        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        cin >> M;
        for (int i = 0; i < M; i++)
        {
            cin >> temp;
            cout << check(temp, v) << '\n';
        }
    }

    return 0;
}