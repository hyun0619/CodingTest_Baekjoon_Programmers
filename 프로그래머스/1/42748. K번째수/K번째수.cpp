#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i=0;i<commands.size();i++) {
        vector<int> tmp;
        for (int j=commands[i][0]; j<=commands[i][1]; j++) {
            tmp.push_back(array[j-1]); //[i][0]번~[i][1]번까지 넣기
            sort(tmp.begin(), tmp.end()); //정렬
        }
        answer.push_back(tmp[commands[i][2]-1]); //[i][2]번째 수 구하기
    }
    return answer;
}