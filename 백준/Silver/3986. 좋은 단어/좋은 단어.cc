#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

vector<int> vec(1'000'000);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        stack<char> stk;
        string str;
        cin >> str;

        for (int i = 0; i < str.size(); i++)
        {
	        if (stk.empty())
	        {
                stk.push(str[i]);
	        }

	        else
	        {
		        if (stk.top() == str[i])
		        {
                    stk.pop();
		        }

		        else
		        {
                    stk.push(str[i]);
		        }
	        }
        }

        if (stk.empty())
        {
            count++;
        }
    }

    cout << count << endl;

	return 0;
}