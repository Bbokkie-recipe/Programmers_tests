#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

//N 스테이지 개수
//각 플레이어들이 멈춘 단계(실패한 단계)
bool cmp(pair<int, float>& a, pair<int, float>& b)
{
    //return a.second > b.second;
    if (a.second > b.second)
    {
        return true;
    }
    else if (a.second == b.second)
    {
        if (a.first < b.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
vector<int> solution(int N, vector<int> stages) {
    int n = 1;
    vector<int> player;
    vector<int> level;
    map<int, int>umap;
    for (int i = 1; i <= N + 1; i++)
    {
        player.push_back(i);
    }
    for (int j = 0; j <= N; j++)
    {
        int temp = 0;
        for (int i = 0; i < stages.size(); i++)
        {
            if (stages[i] == player[j])
            {
                temp++;
            }
        }
        umap.insert({ j + 1, temp }); //make_pair(j+1,temp)
    }
    for (pair<int, int> c : umap)
    {
        level.push_back(c.second);
        //cout<<"key "<<c.first<<" value "<<c.second;
    }
    for (auto c : level)
    {
        //cout<<c<<" ";
    }
    //////////////////////////////////////////////////////////////////////////////
    int players = stages.size();
    map<int, float> percent;
    for (int i = 0; i < level.size() - 1; i++)
    {
        int hash = level[i];
        float tempnum = (float)hash / (float)players;
        if (hash == 0)tempnum = 0;
        percent.insert({ i + 1,tempnum });
        players -= hash;
    }
    for (auto iter = percent.begin(); iter != percent.end(); iter++)
    {
        cout << iter->first << " " << iter->second << endl;
    }

    //map은 key를 기준으로 오름차순 정리를 하므로
    //이제 value를 기준으로 정렬해야함

    vector<pair<int, float> > A;

    for (auto& it : percent) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    vector<int> answer;
    for (auto& it : A) {
        cout << " key " << it.first << " value : " << it.second << endl;
        answer.push_back(it.first);
    }

    return answer;
}