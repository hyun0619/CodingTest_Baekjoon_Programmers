#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//소수 판별 함수
bool IsPrime(int num) {
    //0, 1은 소수가 될 수 없음
    if (num < 2) return false;
    //2부터 num의 제곱근까지만 반복 -> 약수는 짝으로 존재하니까!
    for (int i=2; i*i<=num; i++) {
        //나누어떨어지면 소수 X
        if(num%i == 0) return false;
    }
    //소수 O
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> tmp;

    for(int i=0; i<nums.size()-2;i++) {
        for(int j=i+1; j<nums.size()-1;j++) {
            for(int k=j+1; k<nums.size();k++) {
                int sum = nums[i]+nums[j]+nums[k];
                if(IsPrime(sum)) answer++;
            }
        }
    }

    return answer;
}