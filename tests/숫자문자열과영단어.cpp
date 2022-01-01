#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string s) {

    string Answer = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]) != 0)Answer += s[i];
        else
        {
            switch (s[i])
            {
            case 'o': Answer += "1"; i += 2; break;
            case 't':
                if (s[i + 1] == 'w')
                {
                    Answer += "2"; i += 2; break;
                }
                else
                {
                    Answer += "3"; i += 4; break;
                }
            case 'f':
                if (s[i + 1] == 'o')
                {
                    Answer += "4"; i += 3; break;
                }
                else
                {
                    Answer += "5"; i += 3; break;
                }
            case 's':
                if (s[i + 1] == 'i')
                {
                    Answer += "6"; i += 2; break;
                }
                else
                {
                    Answer += "7"; i += 4; break;
                }
            case 'e': Answer += "8"; i += 4; break;
            case 'n': Answer += "9"; i += 3; break;
            case 'z': Answer += "0"; i += 3; break;
            }
        }
    }
    int answer = stoi(Answer);
    return answer;
}