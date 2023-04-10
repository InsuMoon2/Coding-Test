#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define M 1234567891

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

	int len, i;
	long long hash_value = 0, R = 1;
	char str[51];

	cin >> len >> str;

	for (i = 0; i < len; i++)
	{
		hash_value = (hash_value + (str[i] - 'a' + 1) * R) % M;
		R = (R * 31) % M;
	}

	cout << hash_value << endl;

	return 0;
}