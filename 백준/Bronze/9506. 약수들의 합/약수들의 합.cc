#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (1)
    {
        int n, sum = 0;
        cin >> n;

        if (n == -1) break;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
				sum += i;
        }

        if (sum == n)
        {
            cout << n << " = 1";

            for (int i = 2; i < n; i++)
            {
	            if(n % i == 0)
	            {
                    cout << " + " << i;
	            }
            }

            cout << '\n';
        }

        else
        {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}

