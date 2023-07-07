#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int arr[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B, C;

    cin >> A >> B >> C;

    for (int i = 0; i < 3; i++)
    {
        int start, end;
        cin >> start >> end;

        for (int j = start; j < end; j++)
        {
            arr[j]++;
        }
    }

    int sum = 0;

    for (int i = 0; i < 100; i++)
    {
	    switch (arr[i])
	    {
	    case 1 :
            sum += A;
            break;

        case 2:
            sum += B * 2;
            break;

        case 3:
            sum += C * 3;
            break;
	    }
    }

    cout << sum;

    return 0;
}