#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N;

    set<int> set;
    vector<int> vec;
    int number;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        set.insert(num);
    }

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;

        vec.push_back(num);

        if (set.find(vec[i]) != set.end())
        {
            cout << 1 << '\n';
        }

        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}