#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    // key: 문자(char), value: 해당 문자를 입력하기 위한 최소 클릭 횟수
    map<char, int> m1;

    // 1. 모든 키맵을 순회하며 각 문자별 '최소 클릭 횟수'를 저장합니다.
    for (int i = 0; i < keymap.size(); i++) {
        for (int j = 0; j < keymap[i].size(); j++) {
            char currentChar = keymap[i][j];
            int clickCount = j + 1; // 인덱스는 0부터 시작하므로 클릭 횟수는 j + 1

            // 1-1. map에 처음 등장하는 문자라면 바로 저장
            if (m1.find(currentChar) == m1.end()) {
                m1.insert(pair<char, int>(currentChar, clickCount));
            }
            // 1-2. 이미 map에 있다면, 기존 값보다 현재 클릭 횟수가 더 적을 때만 갱신 (최솟값 보장)
            else {
                if (m1[currentChar] > clickCount) {
                    m1[currentChar] = clickCount;
                }
            }
        }
    }

    // 2. 타겟 문자열들을 하나씩 확인하며 총 클릭 횟수를 계산합니다.
    for (int i = 0; i < targets.size(); i++) {
        int totalCnt = 0;
        bool isPossible = true; // 문자를 만들 수 있는지 여부 확인

        for (int j = 0; j < targets[i].size(); j++) {
            char targetChar = targets[i][j];

            // 2-1. 해당 문자가 키맵(map)에 존재하는지 확인
            if (m1.find(targetChar) == m1.end()) {
                // 키맵에 없는 문자라면 이 단어는 작성 불가능
                totalCnt = -1;
                isPossible = false;
                break;
            }
            
            // 2-2. 존재한다면 미리 저장해둔 최소 클릭 횟수를 더함
            totalCnt += m1[targetChar];
        }
        
        // 결과 리스트에 해당 타겟의 최종 클릭 횟수 추가
        answer.push_back(totalCnt);
    }

    return answer;
}