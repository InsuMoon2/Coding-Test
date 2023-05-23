#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    queue<int> q;
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        q.push(i);
    }

    while (q.size() > 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front() << endl;

    return 0;
}