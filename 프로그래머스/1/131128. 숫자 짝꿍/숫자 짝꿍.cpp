#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    //0~9까지 숫자 빈도수 저장할 배열
    int x_count[10] = {0};
    int y_count[10] = {0};
    int tmp;
    
    // 문자열 X를 순회하며 각 숫자의 개수를 카운트
    for (int i=0; i<X.size(); i++) {
        tmp = X[i] - '0'; // 문자 '0'~'9'를 정수 0~9로 변환
        x_count[tmp]++;
    }
    // 문자열 Y를 순회하며 각 숫자의 개수를 카운트
    for (int i=0; i<Y.size(); i++) {
        tmp = Y[i] - '0'; // 문자 '0'~'9'를 정수 0~9로 변환
        y_count[tmp]++;
    }
    // 가장 큰 수를 만들어야 하므로 9부터 0까지 거꾸로 확인
    for (int i=9; i>=0; i--) {
        int n = min(x_count[i], y_count[i]); // 공통 존재 숫자 개수(최솟값만큼 짝 맞음)
        for (int j=0; j<n; j++) { // 공통 개수(n)만큼 해당 숫자(i) 문자열에 추가
            answer += to_string(i);
        }
    }
    //공통된 숫자가 하나도 없는 경우
    if (answer == "") answer = "-1";
    //공통된 숫자가 0뿐인 경우
    else if (answer[0] == '0') answer = "0";
    
    return answer;
}