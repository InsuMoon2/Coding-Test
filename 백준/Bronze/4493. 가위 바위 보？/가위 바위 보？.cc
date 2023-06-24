#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int awin = 0;
        int bwin = 0;
        cin >> n;
        while (n--)
        {
            
            char a, b;
            cin >> a >> b;
            if (a == 'R')
            {
                if (b == 'R')
                {
                    awin++;
                    bwin++;
                }
                else if (b == 'P')
                    bwin++;
                if (b == 'S')
                    awin++;
            }
            else if (a == 'P')
            {
                if (b == 'R')
                    awin++;
                else if (b == 'P')
                {
                    awin++;
                    bwin++;
                }
                if (b == 'S')
                    bwin++;
            }
            else if (a == 'S')
            {
                if (b == 'R')
                    bwin++;
                else if (b == 'P')
                    awin++;
                if (b == 'S')
                {
                    awin++;
                    bwin++;
                }
            }
            
        }
        if (awin > bwin)
            cout << "Player 1" << '\n';
        else if (bwin > awin)
            cout << "Player 2" << '\n';
        else
            cout << "TIE" << '\n';
    }
}