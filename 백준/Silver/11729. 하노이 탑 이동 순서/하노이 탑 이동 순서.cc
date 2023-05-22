#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// 하노이 탑 이동 순서

void hanoi(int n, int start, int mid, int end) {
	if (n == 1) {
		cout << start << " " << end << '\n';
		return;
	}

	hanoi(n - 1, start, end, mid);
	cout << start << " " << end << '\n';
	hanoi(n - 1, mid, start, end);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;	
	cin >> n;

	cout << (1 << n) - 1 << '\n'; // 이동 횟수 출력
	hanoi(n, 1, 2, 3); // 하노이 탑 이동 순서 출력

	return 0;
}