#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    int length;
    length = answers.size();
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;
    /*1번 수포자*/
    int x[] = { 1,2,3,4,5 };
    int p = 0;
    for (int i = 0; i < length; i++)
    {
        if (p == 5)
        {
            p = 0;
        }
        int k = x[p];
        vec1.push_back(k);
        p++;
    }

    /*2번 수포자*/
    int s = 0;
    int y[] = { 2,1,2,3,2,4,2,5 };
    for (int i = 0; i < length; i++)
    {
        if (s == 8)
        {
            s = 0;
        }
        int k = y[s];
        vec2.push_back(k);
        s++;
    }

    /*3번 수포자*/
    int c = 0;
    int b[] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    for (int i = 0; i < length; i++)
    {
        if (c == 10)
        {
            c = 0;
        }
        int j = b[c];
        vec3.push_back(j);
        c++;
    }

    /*수포자들의 정답개수 추출*/
    int vec1cnt = 0;
    int vec2cnt = 0;
    int vec3cnt = 0;
    for (int i = 0; i < length; i++)
    {
        if (answers[i] == vec1[i])vec1cnt++;
        if (answers[i] == vec2[i])vec2cnt++;
        if (answers[i] == vec3[i])vec3cnt++;
    }

    //정렬시작
    int max = vec1cnt;
    vector<int> samemax;
    samemax.push_back(1);  //1
    if (max <= vec2cnt)//345
    {
        if (max < vec2cnt)
        {
            max = vec2cnt;
            samemax.clear();
            samemax.push_back(2);  //2
            if (max == vec3cnt) samemax.push_back(3); // 2 3
            if (max < vec3cnt)
            {
                samemax.clear();
                samemax.push_back(3);
            }
        }
        else
        {
            samemax.push_back(2);  // 1 2
            if (max <= vec3cnt)
            {
                if (max < vec3cnt)
                {
                    samemax.clear();
                    samemax.push_back(3);
                }//3
                else
                {
                    samemax.push_back(3); //1 3
                }
            }
        }
    }
    else if (max <= vec3cnt)
    {
        if (max < vec3cnt)
        {
            samemax.clear();
            samemax.push_back(3);
        }//3
        else
        {
            samemax.push_back(3); //1 3
        }

    }
    return samemax;
}