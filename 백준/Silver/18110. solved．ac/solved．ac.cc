#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    if (n == 0) {
        cout << "0\n";
        return 0;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int k = round(n * 0.15);
    double sum = 0;
    for (int i = k; i < n - k; i++) {
        sum += v[i];
    }

    int ans = round(sum / (n - k * 2));

    cout << ans << "\n";

    return 0;
}