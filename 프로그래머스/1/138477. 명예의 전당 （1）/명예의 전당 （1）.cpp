#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> tmp;
    
    for (int i=0; i<score.size(); i++) {
        tmp.push_back(score[i]);
        //오름차순 정렬
        sort(tmp.begin(), tmp.end());
        if (tmp.size()>=k+1) {
            tmp.erase(tmp.begin());
            //erase는 값이 아니라 iterator를 인자로 받음
            //그래서 tmp.erase(tmp[0]); 하면 안됨
        }
        answer.push_back(tmp[0]);
    }
    
    return answer;
}