#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    else
    {
        return GCD(b, a % b);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int a, b, maxNum;
        cin >> a >> b;
        maxNum = GCD(a, b);

        cout << a * b / maxNum << endl;
    }
    

    return 0;
}