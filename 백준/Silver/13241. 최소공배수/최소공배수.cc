#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (b == 0) return a;

    else return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int A, B;

    cin >> A >> B;

    // A * B / 최소공약수 = 최대공배수!
    cout << A * B / gcd(A, B);


    return 0;
}