#include<bits/stdc++.h>

using namespace std;

vector<int> vec;
int N, C;

void Modem_Search()
{
    int left = 1; // 최소 거리
    int right = vec[N - 1] - vec[0]; // 최대 거리
    int result = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2; // 현재 거리
        int cnt = 1; // 공유기 개수. 시작은 1개부터
        int prev = vec[0]; // 바꾸기 전의 공유기 위치

        for (int i = 1; i < N; i++)
        {
            // 현재 거리보다 크거나 같으면 공유기 설치
            if (vec[i] - prev >= mid)
            {
                cnt++;
                prev = vec[i];
            }
        }

        // C개이상 설치할 수 있으면 거리 늘리기
        if (cnt >= C)
        {
            result = mid;
            left = mid + 1;
        }
        // 거리 줄이기
        else
            right = mid - 1;
    }

    cout << result << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> C;

    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;

        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    Modem_Search();

    

	return 0;
}