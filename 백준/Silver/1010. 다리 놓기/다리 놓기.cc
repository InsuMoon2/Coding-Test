#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

// 다리 놓기

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, M;
    	int answer = 1, temp = 1;

        cin >> N >> M;

        for (int j = M; j > M - N; j--)
        {
            answer = answer * j;
            answer = answer / temp;
            temp++;
        }

        cout << answer << "\n";
    }
    return 0;
}

