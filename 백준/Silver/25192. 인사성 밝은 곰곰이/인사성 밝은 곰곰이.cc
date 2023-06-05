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

    int N, count = 0;
    cin >> N;

    string str;
    set<string> set;

    for (int i = 0; i < N; i++)
    {
        cin >> str;

        if (str == "ENTER")
        {
            count += set.size();
            set.clear();
        }

        else
        {
            set.insert(str);
        }
    }

    count += set.size();
    cout << count;

    return 0;
}