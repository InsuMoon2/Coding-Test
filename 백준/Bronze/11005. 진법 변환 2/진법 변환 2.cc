#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;  //변환할 10진수 숫자
    cin >> n;

    int b;  //반환할 베이스 진수
    cin >> b;

    vector<int> v;

    while (1) {
        v.push_back(n % b);   //해당 진수로 나눈 나머지를 vector에 넣음
        n /= b;
        if (n == 0) break;
    }

    vector<int>::reverse_iterator iter;
    for (iter = v.rbegin(); iter != v.rend(); iter++) 
    {
        if (*iter >= 10) 
        {
            char c = *iter - 10 + 'A';  //10 이상의 알파벳은 char 타입으로 출력
            cout << c;
        }

        else
        {
            cout << *iter;          //10 미만의 수는 int 타입으로 출력
        }
    }

    return 0;

}