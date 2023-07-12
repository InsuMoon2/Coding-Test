#include<bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> n)
    {
        int number = 1;
        int count = 1;

        while (number % n != 0)
        {
            number = number * 10 + 1;
            number %= n;
            count++;
        }

        cout << count << "\n";
    }

	return 0;
}