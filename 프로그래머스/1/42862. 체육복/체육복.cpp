#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    //여벌이 있는데 도난 당한 경우
    for(int i=0; i<lost.size(); i++) {
        for(int j=0; j<reserve.size(); j++) {
            if (lost[i] == reserve[j]) {
                lost[i] = -1;
                reserve[j] = -1;
                break;
            }
        }
    }
    
    //실제 체육복 빌려주는 경우
    int borrowed = 0;
    for (int i=0; i<lost.size(); i++) {
        if (lost[i] == -1) continue;
        
        for (int j=0; j<reserve.size(); j++) {
            if (reserve[j] == -1) continue;
            
            if (lost[i] - 1 == reserve[j] || lost[i] + 1 == reserve[j]) {
                reserve[j] = -1;
                borrowed++; //빌린 학생 추가
                break;
            }
        }
    }
    
    //체육복 있는 학생 계산
    int total = 0;
    for (int k : lost) {
        if (k != -1) total++; //빌려야 하는 학생 수
    } 
    
    return n - (total - borrowed); //전체 - (빌려야 하는 학생 수 - 빌린 학생 수)
}