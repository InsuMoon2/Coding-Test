#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 파일 개수
    int N;
    cin >> N;

    string Pattern;
    cin >> Pattern;

    int star = Pattern.find("*");

    string first = Pattern.substr(0, star);
    string last = Pattern.substr(star + 1);

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        if (first.size() + last.size() > str.size())
        {
            cout << "NE" << endl;
        }

        else
        {
	        if (first == str.substr(0, first.size()) && last == str.substr(str.length() - last.size()))
	        {
                cout << "DA" << "\n";
	        }

	        else
	        {
                cout << "NE" << "\n";
	        }
        }
    }

	return 0;
}