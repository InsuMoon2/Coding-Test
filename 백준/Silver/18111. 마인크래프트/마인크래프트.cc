#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int N, M, B;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M >> B;

    vector<vector<int>> vec(N, vector<int>(M));

    int min_height = INT_MAX, max_height = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> vec[i][j];

            // min, max 땅 높이
            min_height = min(min_height, vec[i][j]);
            max_height = max(max_height, vec[i][j]);
        }
    }

    int min_time = INT_MAX, max_h = 0;

    for (int h = min_height; h <= max_height; h++)
    {
        // 현재 시간과 현재 가지고 있는 블록
        int time = 0, block = B;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                // 현재 칸의 높이와 목표 높이의 차이
                int diff = vec[i][j] - h;

                // 차이가 양수면 제거, 음수면 쌓기
                if (diff > 0)
                {
                    time += diff * 2; 
                    block += diff; 
                }
                else if (diff < 0)
                {
                    time -= diff; 
                    block += diff;
                }
            }
        }

        if (block >= 0)
        {
            // 시간이 작거나 같고, 높이가 크거나 같으면 갱신
            if (time < min_time || (time == min_time && h > max_h))
            {
                min_time = time;
                max_h = h;
            }
        }
    }

    cout << min_time << " " << max_h << "\n";

    return 0;
}
