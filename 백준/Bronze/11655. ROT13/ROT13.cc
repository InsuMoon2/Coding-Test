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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;

    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            cout << ' ';
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            int tmp = (s[i] - 'a' + 13) % 26;
            cout << char('a' + tmp);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int tmp = (s[i] - 'A' + 13) % 26;
            cout << char('A' + tmp);
        }
        else cout << s[i];
    }

	return 0;
}