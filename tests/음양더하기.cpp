#include <string>
#include <vector>

using namespace std;

int solution(vector<int> abs, vector<bool> b) {
    for (int i = 0; i < abs.size(); i++)
    {
        if (b[i] == false)abs[i] *= -1;
    }
    int answer = 0;
    for (int i = 0; i < abs.size(); i++)
    {
        answer += abs[i];
    }
    return answer;
}