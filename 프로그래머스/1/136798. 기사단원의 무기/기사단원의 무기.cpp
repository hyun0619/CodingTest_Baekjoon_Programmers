#include <string>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0, tmp = 0;
    
    for (int i=1; i<=number; i++) {
        //약수는 쌍으로 나오기 때문 & 시간복잡도 고려
        for (int j=1; j*j<=i; j++) {
            if (i%j == 0) {
                //삼향 연산자 -> 참이면 1 거짓이면 2 반환
                tmp += (j*j==i)?1:2;
            }
        }
        if (tmp > limit) answer += power;
        else if (tmp <= limit) answer += tmp;
        tmp = 0;
    }
    
    return answer;
}