#include <string>
#include <vector>
#include <cctype>
using namespace std;

bool solution(string s) {
    bool answer = true;
    for (int i = 0; i < s.size(); i++)
    {
        answer = isdigit(s[i]);
        if (answer == false)break;
        else answer = true;
    }
    if (s.size() != 4 && s.size() != 6)answer = false;
    return answer;
}