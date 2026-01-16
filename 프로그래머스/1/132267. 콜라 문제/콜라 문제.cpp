#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0; //지금까지 받은 콜라 병 수
    int bonus = 0; //받을 수 있는 콜라 병 수
    int tmp = 0; 
    
    //빈 병 수가 1 or 0이 될 때까지 반복
    while (n >= a) {
        //받을 수 있는 콜라 병 수 계산
        bonus = b * (n/a);
        //남은 병 수 계산
        tmp = n%a;
        //받은 콜라 병 수 + 남은 병 수 = 가진 병 수
        n = bonus + tmp;
        answer += bonus;
    }
    
    
    return answer;
}