#include <string>
#include <vector>
#include <cmath> //sqrt 함수

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    long long num = sqrt(n); //제곱근을 구하는 함수
    if (num * num == n) {
        num += 1;
        answer = num * num;
    }
    else {
        answer = -1;
    }
    
    return answer;
}