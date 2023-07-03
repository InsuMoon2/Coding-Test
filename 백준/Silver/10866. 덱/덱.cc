#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    deque<int> d;
    int T, input;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string str;
        cin >> str;

        if (str == "push_front")
        {
            cin >> input;

            d.push_front(input);
        }

        else if (str == "push_back")
        {
            cin >> input;

            d.push_back(input);
        }

        else if (str == "pop_front")
        {
            if (d.empty())
            {
                cout << -1 << "\n";
            }

            else
            {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }

        else if (str == "pop_back")
        {
            if (d.empty())
            {
                cout << -1 << "\n";
            }

            else
            {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }

        else if (str == "size")
        {
            cout << d.size() << "\n";
        }

        else if (str == "empty")
        {
            cout << d.empty() << endl;
        }

        else if (str == "front")
        {
            if (d.empty())
            {
                cout << -1 << "\n";
            }

            else
            {
                cout << d.front() << "\n";
            }
        }

        else if (str == "back")
        {
            if (d.empty())
            {
                cout << -1 << "\n";
            }

            else
            {
                cout << d.back() << "\n";
            }
        }
    }

    return 0;
}