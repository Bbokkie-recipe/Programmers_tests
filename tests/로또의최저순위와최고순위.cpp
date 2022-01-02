#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    //�ο찡 ������ �ζ� ��ȣ�� ���� �迭 lottos, 
    //��÷ ��ȣ�� ���� �迭 win_nums�� �Ű������� �־����ϴ�. 
    //��÷ ������ �ְ� ������ ���� ������ ���ʴ�� �迭�� ��Ƽ� return
    int chance = 0;
    for (int i = 0; i < 6; i++)
    {
        if (lottos[i] == 0)
        {
            chance++;
        }
    }
    int correct = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (lottos[i] == win_nums[j])
            {
                correct++;
            }
        }
    }

    int minRank = 0;
    switch (correct)
    {
    case 0:
        minRank = 6;
        break;
    case 1:
        minRank = 6;
        break;
    case 2:
        minRank = 5;
        break;
    case 3:
        minRank = 4;
        break;
    case 4:
        minRank = 3;
        break;
    case 5:
        minRank = 2;
        break;
    case 6:
        minRank = 1;
        break;
    }

    int maxRank = 0;
    switch (chance)
    {
    case 0:
        maxRank = minRank - 0;
        break;
    case 1:
        if (correct == 0)maxRank = minRank - 0;
        else maxRank = minRank - 1;
        break;
    case 2:
        if (correct == 0)maxRank = minRank - 1;
        maxRank = minRank - 2;
        break;
    case 3:
        if (correct == 0)maxRank = minRank - 2;
        maxRank = minRank - 3;
        break;
    case 4:
        if (correct == 0)maxRank = minRank - 3;
        else maxRank = minRank - 4;
        break;
    case 5:
        if (correct == 0)maxRank = minRank - 4;
        else maxRank = minRank - 5;
        break;
    case 6:
        maxRank = minRank - 5;
        break;
    }
    vector<int> answer;
    answer.push_back(maxRank);
    answer.push_back(minRank);
    return answer;
}