#include <iostream>
using namespace std;
int main() {
    int n, t, ans = 0;
    int wtime = 0;
    cin >> n >> t;
    while (n--)
    {
        int work;
        cin >> work;
        wtime += work;
        if (wtime <= t)
        {
            ans++;
        }
    }
    cout << ans << '\n';
}