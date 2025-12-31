#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> tmp;
    
    while(n != 0) {
        tmp.push_back(n % 3);
        n /= 3;
    }
    
    for (int i=0; i<tmp.size(); i++) {
        answer += tmp[i] * pow(3, tmp.size()-1-i);
    }
    
    return answer;
}