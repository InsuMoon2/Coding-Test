#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

// 알고리즘 수업 - 피보나치 수 1

using namespace std;

int r_count = 0;
int d_count = 0;
int arr[44];

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        r_count++;
    	return 1;
    }

    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

void fibonacci(int n)
{
    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        d_count++;
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long answer;
    int n;

    cin >> n;

    fib(n);
    fibonacci(n);

    cout << r_count << " " << d_count << "\n";

    return 0;
}

