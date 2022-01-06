#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> document;
    queue<int> sortdocument;

    for (int i = 0; i < priorities.size(); i++)// 2 1 3 2
    {
        document.push(priorities[i]);
    }

    sort(priorities.rbegin(), priorities.rend());

    for (int i = 0; i < priorities.size(); i++) // 3 2 2 1
    {
        sortdocument.push(priorities[i]);
    }

    while (!document.empty())
    {
        int sortdocu = sortdocument.front(); //3
        int seeDocu = document.front(); //1
        if (location == 0)
        {
            if (sortdocu == seeDocu)
            {
                document.pop();
                sortdocument.pop();
                answer++;
                break;
            }
            else
            {
                document.pop();
                location = document.size();
                document.push(seeDocu);

            }
        }
        else
        {
            if (sortdocu == seeDocu)
            {
                location--;
                document.pop();
                sortdocument.pop();
                answer++;
            }
            else
            {
                location--;
                document.pop();
                document.push(seeDocu);
            }
        }

    }
    return answer;
}