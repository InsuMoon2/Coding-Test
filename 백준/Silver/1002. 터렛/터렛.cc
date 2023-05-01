#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int x1, y1, r1, x2, y2, r2;
        double r_distance1 = 0, r_distance2 = 0, distance = 0;
        // 조규현의 자표
        cin >> x1 >> y1 >> r1;
        // 백승환의 좌표
        cin >> x2 >> y2 >> r2;

        // 두 원의 중심 간의 거리
        distance = pow(x1 - x2, 2) + pow(y1 - y2, 2);
        r_distance1 = pow(r1 - r2, 2);
        r_distance2 = pow(r1 + r2, 2);

        if (r1 == r2 && distance == 0)
        {
            cout << "-1" << endl;
        }

        else if (r_distance1 == distance || r_distance2 == distance)
        {
            cout << "1" << endl;
        }

        else if (r_distance1 < distance && distance < r_distance2)
        {
            cout << "2" << endl;
        }

        else
        {
            cout << "0" << endl;
        }
    }


    return 0;
}

