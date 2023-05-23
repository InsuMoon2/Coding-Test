#include <iostream>

using namespace std;

// 홀짝 구분하기

int main(void)
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is even";
    }

    else
    {
        cout << n << " is odd";
    }

    return 0;
}