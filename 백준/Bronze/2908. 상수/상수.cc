#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string a, b, result;
    cin >> a >> b;

    for (int i = 2; i >= 0; i--)
    {
        if (a[i] == b[i])
        {
            continue;
        }

        if (a[i] > b[i])
        {
            result = a;
        }

        else
        {
            result = b;
        }

        break;
    }

    cout << result[2] << result[1] << result[0] << endl;
    
    
    return 0;
}
