#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <stack>
#include <queue>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, input;
    queue<int> que;
    string str;

    cin >> T;

    while (T--)
    {
        cin >> str;

        if (str == "push")
        {
            cin >> input;

            que.push(input);
        }

        else if (str == "pop")
        {
	        if (que.empty())
	        {
                cout << "-1" << "\n";
	        }

	        else
	        {
                cout << que.front() << "\n";
                que.pop();
	        }
        }

        else if (str == "size")
        {
            cout << que.size() << "\n";
        }

        else if (str == "empty")
        {
	        if (que.empty())
	        {
                cout << "1" << "\n";
	        }

	        else
	        {
                cout << "0" << "\n";
	        }
        }

        else if (str == "front")
        {
            if (que.empty())
            {
                cout << "-1" << "\n";
            }

            else
            {
                cout << que.front() << "\n";
            }
        }

        else if (str == "back")
        {
            if (que.empty())
            {
                cout << "-1" << "\n";
            }

            else
            {
                cout << que.back() << "\n";
            }
        }
    }

    return 0;
}