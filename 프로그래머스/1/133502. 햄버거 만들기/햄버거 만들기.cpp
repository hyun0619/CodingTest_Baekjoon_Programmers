#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    // 스택
    vector<int> v = {-1};
    
    for (int x : ingredient) {
        // 현재 맨 위가 빵(1), 새로 들어온 게 야채(2)라면 -> 빵+야채(12)  
        if (v.back() == 1 && x == 2) v.back() = 12;
        // 현재 맨 위가 빵+야채(12), 새로 들어온 게 고기(3)라면 -> 빵+야채+고기(123)
        else if (v.back() == 12 && x == 3) v.back() = 123;
        // 현재 맨 위가 빵+야채+고기(123), 새로 들어온 게 빵이라면 -> 햄버거 완성!
        else if (v.back() == 123 && x == 1) {
            answer++; // 개수 추가
            v.pop_back(); // 스택에서 제거
        }
        // 조건 충족 x라면 스택에 그대로 쌓음
        else v.push_back(x); 
    }
    
    return answer;
}