#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        unordered_map<string, int> clothes;

        for (int i = 0; i < n; i++)
        {
            string name, type;
            cin >> name >> type;


        	clothes[type]++;
        }

        int ret = 1;

        for (auto& value : clothes)
        {
            ret *= (value.second + 1);
        }

        // 옷을 안입을 때 -1
        ret -= 1;
        cout << ret << '\n';
    }

    


	return 0;
}