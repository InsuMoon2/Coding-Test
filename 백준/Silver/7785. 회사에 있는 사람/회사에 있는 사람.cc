#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int n;
    cin >> n;
    set<string> string_set;

    for (int n_idx = 0; n_idx < n; n_idx++) 
    {
        string str1, str2;
        cin >> str1 >> str2;

        if (str2 == "enter")
            string_set.insert(str1);
        else
            string_set.erase(str1);
    }

    for (auto iter = string_set.rbegin(); iter != string_set.rend(); iter++)
    {
        cout << *iter << "\n";
    }

    //for (auto iter : string_set)
    //{
    //    cout << iter << endl;
    //}

	return 0;
}