#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

int cnt[8001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, input;
    vector<int> vec;
    double avage = 0; 
    int center = 0, multi = 0;
    

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        
        avage += input;
        vec.push_back(input);
        
        cnt[input + 4000]++;
    }

    //산술 평균
    avage = round(avage / (1.0 * N));

    if (avage == -0)
    {
        avage = 0;
    }

    //중앙 값
    sort(vec.begin(), vec.end());
    center = vec[(N - 1) / 2];

    //최빈값
    int flag;
    int max = 0;

    for (int i = 0; i < 8001; i++)
    {
        if (cnt[i] > max)
        {
            max = cnt[i];
            flag = i;
        }
    }

    for (int i = flag + 1; i < 8001; i++)
    {
        if (cnt[i] == max)
        {
            flag = i;
            break;
        }
    }
    

    //범위 : N개의 수들 중 최댓값과 최솟값의 차이
    multi = vec[(N - 1)] - vec[0];
 
    cout << avage << endl;
    cout << center << endl;
    cout << flag - 4000 << endl;
    cout << multi;

    return 0;
}