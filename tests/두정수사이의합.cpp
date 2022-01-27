#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (b > a)
    {
        for (int x = a; x <= b; x++)
        {
            answer += x;
        }
    }
    else
    {
        for (int x = b; x <= a; x++)
        {
            answer += x;
        }
    }
    return answer;
}