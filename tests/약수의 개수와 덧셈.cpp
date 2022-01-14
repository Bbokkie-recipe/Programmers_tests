#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

int Check(int num)
{
    set<int>s;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)s.insert(i);
    }
    int cnt = s.size();
    if (cnt % 2 == 0) return num;
    else return num *= -1;
}
int solution(int left, int right) {
    vector <int>v;
    int answer = 0;

    for (int i = left; i <= right; i++)
    {
        answer += Check(i);
    }

    return answer;
}