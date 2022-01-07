#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool func(string a, string b)
{
    return a + b > b + a;
}

string solution(vector<int> num)
{
    vector<string> strvec;
    for (int i = 0; i < num.size(); i++)
    {
        strvec.push_back(to_string(num[i]));
    }
    sort(strvec.begin(), strvec.end(), func);
    string answer = "";
    if (strvec[0] == "0") return "0";
    for (int i = 0; i < strvec.size(); i++)
    {
        answer += strvec[i];
    }
    return answer;
}