#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num; //int형 범위 초과 -> long long으로
    
    //n == 1 일 때
    if (n == 1) {
        return answer;
    }
    
    //반복 작업
    while (n != 1) {
        
        if (answer >= 500) {
            answer = -1;
            break;
        }
        
        
        if (n % 2 == 0) {
            n /= 2;
        }
        else if (n % 2 != 0) {
            n = n*3 + 1;
        }
        answer += 1;
    }
    
    return answer;
}