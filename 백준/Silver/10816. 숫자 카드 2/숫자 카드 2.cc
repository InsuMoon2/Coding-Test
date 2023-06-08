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

    map<int, int> number;
    int N, M;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> M;

        if (number.find(M) == number.end()) 
        {
            number[M] = 1;
        }

        else
        {
            number[M]++;
        }
    }
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> M;

        if (number.find(M) == number.end())
        {
            cout << 0 << " ";
        }

        else
        {
            cout << number[M] << " ";
        }
    }

    return 0;
}