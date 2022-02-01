#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    int list = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (min >= arr[i])
        {
            min = arr[i];
            list = i;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == list)continue;
        answer.push_back(arr[i]);
    }
    if (answer.size() == 0)answer.push_back(-1);
    return answer;
}