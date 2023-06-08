#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    vector<int> vec;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;

        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int input;
        cin >> input;
        auto upper = upper_bound(vec.begin(), vec.end(), input);
        auto lower = lower_bound(vec.begin(), vec.end(), input);

        

        cout << upper - lower << " ";
    }


    

    return 0;
}