#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    // answer[0]: 이진 변환의 횟수, answer[1]: 제거된 모든 '0'의 개수
    vector<int> answer(2, 0);
    int len;
    
    while(s.size() != 1) {
        len = 0; // '0'을 제거한 후 남은 '1'의 개수
        
        // '0'의 개수를 세고, '1'의 개수(len)를 구함
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '0') {
                answer[1]++; // '0'을 발견하면 전체 제거 횟수 카운트 증가
            } else {
                len++;       // '1'인 경우 길이에 포함
            }
        }
        
        // 남은 길이(len)를 이진수 문자열로 변환
        s = ""; // 기존 문자열을 비우고 새로 구성
        while(len) {
            // 나머지를 문자열로 변환하여 추가
            s += to_string(len % 2); 
            len /= 2;
        }
        
        // 역순으로 저장된 이진수 문자열을 뒤집음
        // len이 6이면 "011" -> "110"으로 변환
        reverse(s.begin(), s.end());
        
        // 변환 회차를 1 증가
        answer[0]++;
    }
    
    return answer;
}