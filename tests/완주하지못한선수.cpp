#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    map <string, int> _map;
    for (auto Player : participant)
    {
        if (_map.end() == _map.find(Player))_map.insert(make_pair(Player, 1));
        else _map[Player]++;
    }

    for (auto Player : completion)
    {
        _map[Player]--;
    }
    string answer = "";
    for (auto Player : participant)
    {
        if (_map[Player] > 0) answer = Player;
    }

    return answer;
}