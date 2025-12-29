#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for (left; left<=right;left++) {
        int count = 0; //매 반복마다 초기화
        
        for (int i=1; i<=left; i++) {
            if (left % i == 0) {
                count += 1;
            }
        }
        if (count % 2 == 0) {
            answer += left;
        }
        else answer -= left;
    }
    
    return answer;
}