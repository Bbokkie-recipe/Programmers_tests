#include <string>
#include <vector>
#include <iostream>
#include <utility>
#include <map>//multimap은 중복 key를 허용

using namespace std;


int solution(vector<vector<string>> clothes) {
    multimap <string, string> mm;
    vector<int> count;
    string preKey = "";

    for (int i = 0; i < clothes.size(); i++)
    {
        for (int j = 0; j < clothes[i].size() - 1; j++)
        {
            string name = clothes[i][j];
            string kind = clothes[i][clothes[0].size() - 1];
            pair<string, string> p1 = make_pair(kind, name);
            mm.insert(p1);
        }
    }

    int answer = 1;

    for (auto i = mm.begin(); i != mm.end(); i++)
    {
        if (i == mm.begin())
        {
            preKey = (i)->first;
        }
        else if (i != mm.begin() && (i)->first == preKey) continue;
        else if (i != mm.begin() && (i)->first != preKey)
        {
            preKey = (i)->first;
        }
        int k = mm.count(i->first);
        count.push_back(k);
    }

    for (int i = 0; i < count.size(); i++)
    {
        answer *= (count[i] + 1);
    }

    answer -= 1;

    return answer;
}