#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int num1=0, num2=0;
    
    for (int i=0; i<goal.size(); i++) {
        if (cards1[num1] != goal[i] && cards2[num2] != goal[i]) {
            answer = "No";
            return answer;
        }
        
        if (cards1[num1] == goal[i]) {
            num1 += 1;
        }
        
        else if (cards2[num2] == goal[i]) {
            num2 += 1;
        }
    }
    answer = "Yes";
    return answer;
}