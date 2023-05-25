#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, input;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int Quarter = 0, Dime = 0, Nickel = 0, Peeny = 0;
        cin >> input;

        while (input)
        {
            if (input >= 25)
            {
                Quarter++;
                input -= 25;
            }

            else if (input >= 10)
            {
                Dime++;
                input -= 10;
            }

            else if (input >= 5)
            {
                Nickel++;
                input -= 5;
            }

            else if (input >= 1)
            {
                Peeny++;
                input -= 1;
            }
        }
        

        cout << Quarter << " " << Dime << " " << Nickel << " " << Peeny << endl;
    }

    

    return 0;
}