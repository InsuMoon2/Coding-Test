#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

// 신나는 함수 실행

using namespace std;

int DP[51][51][51];

int W(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
        return 1;

	if (DP[a][b][c] != 0)
		return DP[a][b][c];

	if (a > 20 || b > 20 || c > 20)
		return DP[a][b][c] = W(20, 20, 20);


	if (a < b && b < c)
		return DP[a][b][c] = W(a, b, c - 1) + W(a, b - 1, c - 1) - W(a, b - 1, c);


	return DP[a][b][c] = W(a - 1, b, c) + W(a - 1, b - 1, c) + W(a - 1, b, c - 1) - W(a - 1, b - 1, c - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c;

    while (true)
    {
		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1)
		{
			break;
		}

		cout << "w(" << a << ", " << b << ", " << c << ") = " << W(a, b, c) << "\n";
    }

	

    return 0;
}

