#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> num;
    int temp = 1;
    
    while (n!=0) {
        num.push_back(n%10);
        n/=10;
    }
    
    sort(num.begin(), num.end());
    
    for(int i=0;i<num.size(); i++) {
        answer += num[i] * temp;
        temp *= 10;
    }
    
    
    return answer;
}