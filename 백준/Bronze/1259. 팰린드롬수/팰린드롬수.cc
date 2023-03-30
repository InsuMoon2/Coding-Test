#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;

    while (N != "0")
    {
        cin >> N;
        string buf = N;
        reverse(N.begin(), N.end());

    	if (N == "0") 
        { 
            break;
        }

        else if (N == buf)
        { 
            cout << "yes\n";
        }

        else 
        {
            cout << "no\n";
        }
    }

    return 0;
}