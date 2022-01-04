#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string new_id) {

	//1�ܰ� new_id�� ��� �빮�ڸ� �����Ǵ� �ҹ��ڷ� ġȯ
	string idTest1 = "";
	for (auto c : new_id)
	{
		idTest1 += tolower(c);
	}
	//2�ܰ� new_id���� ���ĺ� �ҹ���, ����, ����(-), ����(_), ��ħǥ(.)�� ������ ��� ���ڸ� ����
	string idTest2 = "";
	for (auto c : idTest1)
	{
		if (c != '.' && c != '-' && c != '_' && !('a' <= c && 'z' >= c) && !('0' <= c && '9' >= c))continue;
		else idTest2 += c;
	}
	//3�ܰ� new_id���� ��ħǥ(.)�� 2�� �̻� ���ӵ� �κ��� �ϳ��� ��ħǥ(.)�� ġȯ
	string idTest3 = "";
	int spotcheck = 0;
	for (auto c : idTest2)
	{
		if (c == '.')
		{
			spotcheck++; idTest3 += c;
		}
		else if (c != '.')
		{
			idTest3 += c; spotcheck = 0;
		}
		if (c == '.' && spotcheck >= 2)
			idTest3.pop_back();
	}


	//4�ܰ� new_id���� ��ħǥ(.)�� ó���̳� ���� ��ġ�Ѵٸ� ����

	string idTest4 = "";
	if (!idTest3.empty() && idTest3.front() == '.') idTest3.erase(0, 1);
	if (!idTest3.empty() && idTest3[idTest3.size() - 1] == '.')idTest3.pop_back();

	idTest4 = idTest3;

	//5�ܰ� new_id�� �� ���ڿ��̶��, new_id�� "a"�� ����
	string idTest5 = "";
	if (idTest4.empty())idTest4 += "a";
	idTest5 = idTest4;

	//6�ܰ� new_id�� ���̰� 16�� �̻��̸�, new_id�� ù 15���� ���ڸ� ������ ������ ���ڵ��� ��� ����
	 //���� ���� �� ��ħǥ(.)�� new_id�� ���� ��ġ�Ѵٸ� ���� ��ġ�� ��ħǥ(.) ���ڸ� �����մϴ�.

	string idTest6 = "";
	if (idTest5.size() >= 16) idTest5 = idTest5.substr(0, 15);/*idTest5.erase(15,idTest5.back());*/
	if (!idTest5.empty() && idTest5.back() == '.')idTest5.erase(idTest5.size() - 1, 1);
	idTest6 = idTest5;

	//7�ܰ� new_id�� ���̰� 2�� ���϶��, new_id�� ������ ���ڸ� new_id�� ���̰� 3�� �� ������ �ݺ��ؼ� ���� ���Դϴ�.
	string idTest7 = "";
	char lsatword = idTest6.back();
	if (!idTest6.empty() && idTest6.size() <= 2)
	{
		while (idTest6.size() != 3) idTest6 += lsatword;
	}
	idTest7 = idTest6;

	string answer = idTest7;
	return answer;
}