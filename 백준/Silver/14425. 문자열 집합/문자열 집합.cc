#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, result = 0;
    set<string> s;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    for (int i = 0; i < M; i++)
    {
        string str;
        cin >> str;

        if (s.find(str) != s.end())
        {
            result++;
        }
    }

    cout << result;

    return 0;
}

