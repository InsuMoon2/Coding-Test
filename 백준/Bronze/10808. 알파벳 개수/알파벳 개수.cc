#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
    int alpha[26] = {};
    string S;
    cin >> S;

    for (int i = 0; i < S.length(); i++)
    {
        alpha[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << endl;
    }


    return 0;
}
