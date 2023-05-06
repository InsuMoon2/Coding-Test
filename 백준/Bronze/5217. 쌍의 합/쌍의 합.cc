#include <iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int cnt = 0;
        cin >> n;
        cout << "Pairs for " << n << ": ";
        for (int i = 1; i <= 12; i++)
            for (int j = 1; j <= 12; j++)
                if (i + j == n && i<j)
                {
                    if (!cnt)
                    {
                        cnt++;
                        cout << i << ' ' << j;
                    }
                    else
                        cout << ", " << i << ' ' << j;
                }
        cout << '\n';
    }
}
