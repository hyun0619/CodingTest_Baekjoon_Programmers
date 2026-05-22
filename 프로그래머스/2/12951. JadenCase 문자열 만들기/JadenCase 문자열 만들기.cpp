#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool bFirstChar = true;
    
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ' ') {
            answer += s[i];
            bFirstChar = true;
        }
        
        else {
            if (bFirstChar) {
                answer += toupper(s[i]);
                bFirstChar = false;
            }
            else {
                answer += tolower(s[i]);
            }
        }
    }
    
    return answer;
}