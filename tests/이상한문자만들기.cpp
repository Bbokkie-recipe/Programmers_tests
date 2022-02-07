#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            idx = 0;
            answer += s[i];
            continue;
        }
        if (idx % 2 == 0)
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
        answer += s[i];
        idx++;
    }
    return answer;
}