//문자열 내 p와 y의 개수
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'p') p++;
        if (s[i] == 'P') p++;
        if (s[i] == 'y') y++;
        if (s[i] == 'Y') y++;
    }
    if (p == y) answer = true;
    if (p != y) answer = false;
    if (p == 0 && y == 0)answer = true;
    return answer;
}