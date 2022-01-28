#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    int len = phone_number.size();
    string answer = phone_number;
    for (int i = 0; i < len - 4; i++)
    {
        answer.replace(i, 1, "*");
    }
    return answer;
}