#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = (long)sqrt(n);

    if (n == (long)pow(answer, 2))
    {
        answer = (long)pow(answer + 1, 2);
    }
    else
    {
        answer = -1;
    }
    return answer;
}