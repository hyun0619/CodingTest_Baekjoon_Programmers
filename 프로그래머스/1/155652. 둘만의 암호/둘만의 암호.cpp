#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "", apb = "";
    
    // 전체 알파벳 리스트
    for (char i='a'; i<='z'; i++) apb += i;
    // skip 문자열 리스트에서 제거
    for (char a : skip) apb.erase(apb.find(a), 1);
    // 입력 문자열을 순회하며 index만큼 뒤의 문자로 변환
    // index % apb.size() -> index가 apb.size()보다 클 경우 대비
    for (int i=0; i<s.size(); i++) {
        answer += apb[(apb.find(s[i])+index)%apb.size()];
    }
    
    return answer;
}