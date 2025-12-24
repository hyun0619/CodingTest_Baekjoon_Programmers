#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    for (int i=0; i<seoul.size();i++){
        if (seoul[i] == "Kim") {
            //to_string : 숫자를 문자열로 바꿔줌
            answer = "김서방은 "+ to_string(i) +"에 있다";
        }
    }
    
    return answer;
}