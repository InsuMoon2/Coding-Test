#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - i - 1])
        {
            cout << "0" << endl;

            return 0;
        }
    }

    cout << "1" << endl;

    return 0;
}