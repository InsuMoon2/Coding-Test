#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <map>
#include <set>

using namespace std;

int N, M;
string pokemons[100001];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    map<string, int> pokemon;

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        string input;
        cin >> input;
        pokemons[i] = input;

        pokemon.insert(make_pair(input, i));
    }

    for (int i = 1; i <= M; i++)
    {
        string s;
        int n;
        cin >> s;

        if (isdigit(s[0]))
        {
            n = stoi(s);
            cout << pokemons[n] << "\n";
        }

        else
        {
            auto it = pokemon.find(s);
            cout << it->second << '\n';
        }
    }


    return 0;
}