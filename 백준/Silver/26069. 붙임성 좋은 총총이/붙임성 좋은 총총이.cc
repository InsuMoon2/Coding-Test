#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	set<string> set{ "ChongChong" };
	int n, count = 0;
	cin >> n;

	while (n--)
	{
		string a, b;
		cin >> a >> b;
		if (set.find(a) != set.end() || set.find(b) != set.end()) 
		{
			set.insert(b);
			set.insert(a);
		}
	}
	cout << set.size();
}

