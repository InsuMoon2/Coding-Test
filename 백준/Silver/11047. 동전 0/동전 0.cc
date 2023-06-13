#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec;
    int N, K;
    int count = 0;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end(), greater<>());

    for (int i = 0; i < N; i++)
    {
        count += K / vec[i];
        K = K % vec[i];
    }

    cout << count << endl;
    

    return 0;
}