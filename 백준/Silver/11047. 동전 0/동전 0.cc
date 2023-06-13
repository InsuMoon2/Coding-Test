#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> vec;
    int N, K;
    int count = 0;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end(), greater<>());

    for (int i = 0; i < N; i++)
    {
        count += K / vec[i];
        K %= vec[i];
    }

    cout << count;

    return 0;
}
