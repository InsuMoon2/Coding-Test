#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int X;
    cin >> X;

    int ans = 0;
    while (X > 0) {
        if (X % 2 == 1) {
            ans++;
        }
        X /= 2;
    }

    cout << ans;

    return 0;
}

