#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    //최고 점수 순으로 정렬
    sort(score.rbegin(), score.rend());
    //사과 m개씩 묶음, 인덱스0부터라 m-1
    for (int i=m-1; i<score.size(); i+=m) {
        int num = score[i]; //최저 사과 점수
        answer += num * m;
    }
    
    return answer;
}