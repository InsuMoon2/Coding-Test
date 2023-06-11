#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int x, y;
    vector <pair<int, int>> arr;
    
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        arr.push_back({ x, y });
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].first << ' ' << arr[i].second << "\n";
    }

    return 0;
}