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

const int MAX = 9;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> vec(9);
    int sum = 0;

    for (int i = 0; i < MAX; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }

    sort(vec.begin(), vec.end());

	for (int i = 0; i < MAX; i++)
	{
		for (int j = i + 1; j < MAX; j++)
		{
			if (sum - vec[i] - vec[j] == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						cout << vec[k] << endl;
					}
				}

				return 0;
			}
		}
	}
    

    return 0;
}