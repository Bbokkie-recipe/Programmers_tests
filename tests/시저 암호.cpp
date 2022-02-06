#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            answer += (s[i]);
            continue;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] + n <= 'z')
            {
                answer.push_back(s[i] + n);
            }
            else
            {
                s[i] -= 26;
                answer.push_back(s[i] + n);
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] + n <= 'Z')
            {
                answer.push_back(s[i] + n);
            }
            else
            {
                s[i] -= 26;
                answer.push_back(s[i] + n);
            }
        }
    }

    return answer;
}