#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool wordinside = false;
    
    for (auto i : s) {
        if (i == ' ') {
            answer += ' ';
            wordinside = false;
        }
        else if (!wordinside) {
            answer += toupper(i);
            wordinside = true;
        }
        else {
            answer += tolower(i);
        }
    }
    
    return answer;
}