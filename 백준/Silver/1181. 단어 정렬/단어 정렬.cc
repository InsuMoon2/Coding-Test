#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int compare(string a, string b)
{
    //길이가 같다면 사전 순으로. 밑에서 Sort로 오름차순 정렬을 한번 했기 때문
    if (a.length() == b.length())
    {
        return a < b;
    }

    //길이가 다르다면 짧은 순으로
    else
    {
        return a.length() < b.length();
    }

}

string str[20000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> str[i];
    }

    sort(str, str + N, compare);

    for (int i = 0; i < N; i++)
    {
        if (str[i] == str[i + 1])
        {
            continue;
        }

        cout << str[i] << '\n';
    }

    

    return 0;
}