#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        temp += i;
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        temp -= numbers[i];
    }
    int answer = temp;
    return answer;
}