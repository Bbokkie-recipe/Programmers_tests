#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string new_id) {

	//1단계 new_id의 모든 대문자를 대응되는 소문자로 치환
	string idTest1 = "";
	for (auto c : new_id)
	{
		idTest1 += tolower(c);
	}
	//2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거
	string idTest2 = "";
	for (auto c : idTest1)
	{
		if (c != '.' && c != '-' && c != '_' && !('a' <= c && 'z' >= c) && !('0' <= c && '9' >= c))continue;
		else idTest2 += c;
	}
	//3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환
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


	//4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거

	string idTest4 = "";
	if (!idTest3.empty() && idTest3.front() == '.') idTest3.erase(0, 1);
	if (!idTest3.empty() && idTest3[idTest3.size() - 1] == '.')idTest3.pop_back();

	idTest4 = idTest3;

	//5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입
	string idTest5 = "";
	if (idTest4.empty())idTest4 += "a";
	idTest5 = idTest4;

	//6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거
	 //만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.

	string idTest6 = "";
	if (idTest5.size() >= 16) idTest5 = idTest5.substr(0, 15);/*idTest5.erase(15,idTest5.back());*/
	if (!idTest5.empty() && idTest5.back() == '.')idTest5.erase(idTest5.size() - 1, 1);
	idTest6 = idTest5;

	//7단계 new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복해서 끝에 붙입니다.
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