#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int GCD(int a, int b)
{
    if (b > a) 
        return GCD(b, a);

    if (a % b == 0) 
        return b;

    else 
        return GCD(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2 7
    // 3 5
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int first = x1 * y2 + x2 * y1;
    int second = y1 * y2;

    cout << first / GCD(first, second) << " " << second / GCD(first, second);

    return 0;
}