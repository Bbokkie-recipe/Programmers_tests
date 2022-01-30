#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int x = s.size();
    string answer = "";
    if (x % 2 == 0)
    {
        x = (x / 2);
        int y = (x - 2);
        for (int i = 0; i < x + 1; i++)
        {
            if (i == y || i < y)continue;
            else answer += s[i];
        }
    }
    else
    {
        x = (x / 2);
        int y = (x - 1);
        for (int i = 0; i < x + 1; i++)
        {
            if (i == y || i < y)continue;
            else answer += s[i];
        }

    }
    return answer;
}