#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    int tmp = 0;
    
    for (int i=0; i<strlist.size(); i++) {
        for (int j=0; j<strlist[i].size(); j++) {
            tmp++;
        }
        answer.push_back(tmp);
        tmp = 0;
    }
    return answer;
}