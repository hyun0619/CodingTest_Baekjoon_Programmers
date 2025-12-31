#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    
    for (int i=0; i<s.length(); i++) {
        
        //공백이 있는 경우 - 인덱스 초기화
        if (s[i] == ' ') {
            index = -1;
        }
        
        //인덱스가 짝수번째 - 대문자
        if (index % 2 == 0) {
            s[i] = toupper(s[i]);
        }
        
        //인덱스가 홀수번째 - 소문자
        else if (index % 2 != 0) {
            s[i] = tolower(s[i]);
        }
        
        index++;
    }
    
    return s;
}