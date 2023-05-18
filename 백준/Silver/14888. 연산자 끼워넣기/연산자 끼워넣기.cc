#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define MAX 100000000

// 연산자 끼워넣기

using namespace std;

// 연산자 4개
int oper[4];
// 2 ~ 11
int num[12];

int N;

// 최소, 최대
int m = MAX;
int M = -MAX;

void DP(int result, int count)
{
	// 종료 시점
	if (count == N -1)
	{
        // 연산 후에 최대, 최솟값 갱신
        if (m > result)
            m = result;
        if (M < result)
            M = result;

        return;
	}

    for (int i = 0; i < 4; i++)
    {
	    if (oper[i] == 0)  continue;

        oper[i]--;

	    if (i == 0)
            DP(result + num[count + 1], count + 1);

        else if (i == 1)
            DP(result - num[count + 1], count + 1);

        else if (i == 2)
            DP(result * num[count + 1], count + 1);

        else if (i ==3)
            DP(result / num[count + 1], count + 1);

        oper[i]++;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    cin >> oper[0] >> oper[1] >> oper[2] >> oper[3];

    DP(num[0], 0);

    cout << M << "\n" << m << "\n";

    return 0;
}

