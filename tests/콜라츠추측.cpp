#include <string>
#include <vector>

using namespace std;

int solution(int Num) {
    int answer = 0;
    long long num = Num;
    while (answer < 500)
    {
        if (num == 1)break;
        answer++;
        if (num % 2 == 0)num /= 2;
        else num = num * 3 + 1;
        if (answer == 500) return -1;
    }
    return answer;
}