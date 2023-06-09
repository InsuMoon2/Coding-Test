#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <map>
#include <set>

using namespace std;

int N;
int Arr[301];
int DP[301];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> Arr[i];
	}

	DP[1] = Arr[1];
	DP[2] = Arr[1] + Arr[2];
	DP[3] = max(Arr[1] + Arr[3], Arr[2] + Arr[3]);

	for (int j = 4; j <= N; j++) {
		DP[j] = max(DP[j - 2] + Arr[j], DP[j - 3] + Arr[j - 1] + Arr[j]);
	}

	cout << DP[N];

    return 0;
}
