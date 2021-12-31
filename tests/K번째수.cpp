#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	int length = commands.size();
	for (int u = 0; u < length; u++)
	{
		int i, j, k;
		i = commands[u][0];
		j = commands[u][1];
		k = commands[u][2];
		k--;
		vector<int> tempArray;
		for (int s = i - 1; s < j; s++)
		{
			tempArray.push_back(array[s]);
		}
		sort(tempArray.begin(), tempArray.end());
		answer.push_back(tempArray[k]);
	}
	return answer;
}