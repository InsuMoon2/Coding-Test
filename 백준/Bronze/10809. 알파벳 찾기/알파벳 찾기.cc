#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string S; 
    int arr[26]; 
    cin >> S;

    for (int i = 0; i < 26; i++)
    {
        arr[i] = -1; 
    }
    for (int i = 0; i < S.length(); i++)
    {
        if (arr[S[i] - 97] < 0) arr[S[i] - 97] = i;
    }
    for (int i = 0; i < 26; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;

}