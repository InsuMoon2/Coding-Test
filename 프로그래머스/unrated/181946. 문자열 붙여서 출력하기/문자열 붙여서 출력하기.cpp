#include <iostream>
#include <string>

// 문자열 붙여서 출력하기

using namespace std;

int main(void) {
    string str1, str2;
    cin >> str1 >> str2;

    string str = str1 + str2;
    cout << str;

    return 0;
}