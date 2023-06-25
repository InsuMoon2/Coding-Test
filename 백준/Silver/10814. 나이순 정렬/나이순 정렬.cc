#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(pair<int, string> age, pair<int, string> name)
{
    return age.first < name.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int a;
    string str;

    vector <pair<int, string>> input = {};

    for (int i = 1; i <= N; i++)
    {
        cin >> a >> str;

        input.push_back({a , str});
    }

    stable_sort(input.begin(), input.end(), cmp);

    int size = input.size();
    for (int i = 0; i < size; i++)
    {
        cout << input[i].first << " " << input[i].second << "\n";
    }

    return 0;
}