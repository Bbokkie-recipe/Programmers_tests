#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> BridgeQ;
    int time = 0;
    int sum = 0;
    int truck_idx = 0;
    while (1)
    {
        time++;
        if (BridgeQ.size() == bridge_length)
        {
            sum -= BridgeQ.front();
            BridgeQ.pop();
        }
        if (sum + truck_weights[truck_idx] <= weight)
        {
            if (truck_idx == truck_weights.size() - 1)
            {
                time += bridge_length;
                break;
            }
            sum += truck_weights[truck_idx];
            BridgeQ.push(truck_weights[truck_idx]);
            truck_idx++;
        }
        else
        {
            BridgeQ.push(0);
        }
    }
    return time;
}