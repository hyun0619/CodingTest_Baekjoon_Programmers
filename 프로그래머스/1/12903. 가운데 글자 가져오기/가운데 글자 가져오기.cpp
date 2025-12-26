#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    //길이가 짝수인 경우 - 바로 앞 문자 추가
    if (s.length() % 2 == 0) {
        answer += s[(s.length() / 2) - 1];
    }
    answer += s[s.length() / 2];

    
    
    return answer;
}