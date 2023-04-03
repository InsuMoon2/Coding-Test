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

    string n;
    int b, ans = 0;
    cin >> n >> b;
    int len = n.length();

    for (int i = 0; i < len; i++) 
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += (n[i] - '0') * pow(b, len - 1 - i);
        }

        else
        {
            ans += (n[i] - 'A' + 10) * pow(b, len - 1 - i);
        }
    }

    cout << ans << endl;
    return 0;
}