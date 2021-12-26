#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	queue<int> lineUp;
	vector<int> answer;
	for (int i = 0; i < progresses.size(); i++)
	{
		if ((100 - progresses[i]) % speeds[i] > 0)
		{
			progresses[i] = (100 - progresses[i]) / speeds[i] + 1;
		}
		else
			progresses[i] = (100 - progresses[i]) / speeds[i];
		lineUp.push(progresses[i]);
	}

	while (!lineUp.empty())
	{
		int cnt = 0;
		int now = lineUp.front();

		while (1)
		{
			if (!lineUp.empty() && now >= lineUp.front())
			{
				lineUp.pop();
				cnt++;
			}
			else break;
		}
		answer.push_back(cnt);
	}


	return answer;
}