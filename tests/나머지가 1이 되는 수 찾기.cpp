#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(int n) {
    int answer = 0;
    stack<int> s;
    for (int i = n; i > 0; i--)
    {
        if (n % i == 1)s.push(i);
    }
    answer = s.top();
    return answer;
}