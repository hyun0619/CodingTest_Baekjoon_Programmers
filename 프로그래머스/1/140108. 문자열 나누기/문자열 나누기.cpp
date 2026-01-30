#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0, cnt1 = 0, cnt2 = 0; //기준 문자, 그 외 문자
    char tmp;

    for (int i=0; i<s.size(); i++) {
        if (cnt1 == 0) { //시작, 개수 초기화 상태일 때
            cnt1 = 1;
            tmp = s[i];
        } 
        else { //진행 중일 때
            if (s[i] == tmp) cnt1++;
            else cnt2++;
        }
        if (cnt1 == cnt2) { //두 카운드 같아지는 순간
            answer++;
            cnt1 = 0;
            cnt2 = 0;
        }
    }
    
    if (cnt1 > 0) answer++;
    
    return answer;
}