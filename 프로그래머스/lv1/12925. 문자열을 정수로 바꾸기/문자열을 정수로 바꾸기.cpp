#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s)
{
    int answer = 0;
    
	stringstream ss;
    ss.str(s);
    ss >> answer;

    return answer;
}