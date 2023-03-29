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

    int N, F;
    cin >> N >> F;

    N = (N / 100) * 100; 

    while (N % F != 0) 
    { 
        N++;
    }

    int ans = N % 100;

    if (ans < 10) 
    { 
        cout << "0" << ans << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}