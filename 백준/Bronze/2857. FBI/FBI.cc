#include <iostream>
#include <string>
using namespace std;
int main() {
    string fbi[6];
    string ans = "";
    for (int i = 1; i <= 5; i++)
    {
        cin >> fbi[i];
        //find함수는 찾은 문자열의 위치를 반환한다. 이는 int 값이 아니고 iterator값이다.
        if (fbi[i].find("FBI") == string::npos)//찾는 문자열이 없다면
            continue;
        else
            ans += to_string(i);
    }
    if (ans.size() == 0)
        cout << "HE GOT AWAY!" << '\n';
    else
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
    }
}
