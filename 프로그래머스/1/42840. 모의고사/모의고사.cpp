#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer, allcase(3, 0);
    vector<int> case1 = {1, 2, 3, 4, 5};
    vector<int> case2 = { 2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> case3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5,};
    
    //정답 개수 찾기
    for (int i=0; i<answers.size(); i++) {
        if (case1[i%case1.size()] == answers[i]) {
            allcase[0] += 1;
        }
        if (case2[i%case2.size()] == answers[i]) {
            allcase[1] += 1;
        }
        if (case3[i%case3.size()] == answers[i]) {
            allcase[2] += 1;
        }
    }
    
    //범위 내에서 가장 큰 값을 가리키는 반복자 반환
    //*을 붙여서 값을 가져옴
    int max_num = *max_element(allcase.begin(), allcase.end());
    
    for (int j=0; j<allcase.size(); j++) {
        if (allcase[j] == max_num) {
            answer.push_back(j+1);
        }
    }

    return answer;
}