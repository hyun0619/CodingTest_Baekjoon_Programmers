#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    // 성격 , 점수 저장하기 위한 Map
    map<char, int> TypeScore;
    // 획득 가능 점수 미리 선언
    int score[8]  = {0, 3, 2, 1, 0, 1, 2, 3};
        
    for (int i=0; i<survey.size(); i++) {
        // choices[i] / 4 의 결과:
        // 1, 2, 3일 때: 0 (survey[i][0] -> 첫 번째 문자, 즉 비동의 관련 유형)
        // 4, 5, 6, 7일 때: 1 (survey[i][1] -> 두 번째 문자, 즉 동의 관련 유형)
        // score[choices[i]]: 위에서 정의한 배열을 통해 해당 선택지의 점수를 바로 가져옴
        TypeScore[survey[i][choices[i]/4]] += score[choices[i]];
    }
    
    // 각 지표별 점수 비교 -> 성격 유형 확정
    answer += TypeScore['R'] >= TypeScore['T'] ? 'R' : 'T';
    answer += TypeScore['C'] >= TypeScore['F'] ? 'C' : 'F';
    answer += TypeScore['J'] >= TypeScore['M'] ? 'J' : 'M';
    answer += TypeScore['A'] >= TypeScore['N'] ? 'A' : 'N';
    
    return answer;
}