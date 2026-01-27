#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (int i=0; i<babbling.size(); i++) {
        //기본을 true, 발음 불가능한 부분이 나오면 false로 바꿀 '실패 플래그'
        bool check=true;
        //바로 직전에 발음한 단어 기억 변수 == 연속 발음 방지
        //현재 체크 중인 글자
        string first = "", fb = "";
        
        //단어의 글자 하나하나 체크
        for (int j=0; j<babbling[i].size(); j++) {
            //현재 검사할 글자를 문자열로 변환해 저장
            fb = babbling[i][j];
            if (babbling[i].substr(j, 3) == "aya" && first != fb) {
                j+=2;
                first = fb; //방금 발음했음을 기록
            }
            else if (babbling[i].substr(j, 2) == "ye" && first != fb) {
                j+=1;
                first = fb;
            }
            else if (babbling[i].substr(j, 3) == "woo" && first != fb) {
                j+=2;
                first = fb;
            }
            else if (babbling[i].substr(j, 2) == "ma" && first != fb) {
                j+=1;
                first = fb;
            }
            //4개 경우 해당X면 발음 불가
            else check = false; //실패라는 의미!
        }
        //단어 끝까지 검사했는데 실패한 적 없으면 성공
        if (check) answer++;
    }
    
    return answer;
}