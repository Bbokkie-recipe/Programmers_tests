#include <string>
#include <vector>
#include <iostream>
using namespace std;

int answer;
void DFS(vector<int> v, int sum, int num, int target)
{
    if (num == v.size())
    {
        if (sum == target) { answer++; }
        return;
    }
    DFS(v, sum + v[num], num + 1, target);
    DFS(v, sum - v[num], num + 1, target);
}
int solution(vector<int> numbers, int target) {
    DFS(numbers, 0, 0, target);
    return answer;
}