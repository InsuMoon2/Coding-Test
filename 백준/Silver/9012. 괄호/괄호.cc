#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    string input;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        stack<char> stk = {};
        cin >> input;

        int size = input.size();
        for (int j = 0; j < size; j++)
        {
            if (input[j] == '(')
            {
                stk.push(input[j]);
            }

            else if (input[j] == ')')
            {
                if (stk.empty())
                {
                    stk.push(input[j]);
                }

                else
                {
                    if (stk.top() == '(')
                    {
                        stk.pop();
                    }

                    else
                    {
                        stk.push(input[j]);
                    }
                }
            }
        }

        if (!stk.empty()) 
        { 
            cout << "NO" << endl;    
        }

        else 
        {
            cout << "YES" << endl;
        }
     
    }

    return 0;
}