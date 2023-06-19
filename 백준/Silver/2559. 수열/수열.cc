#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

vector<int> vec;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> temperatures(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> temperatures[i];
    }

    int maxSum = 0;
    int currentSum = 0;

    for (int i = 0; i < k; i++) 
    {
        currentSum += temperatures[i];
    }

    maxSum = currentSum;

    for (int i = k; i < n; i++) 
    {
        currentSum += temperatures[i] - temperatures[i - k];
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << endl;

	return 0;
}