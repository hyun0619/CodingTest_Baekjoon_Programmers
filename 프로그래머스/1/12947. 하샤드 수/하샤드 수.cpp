#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = 0;
    int origin = x;
    
    while(x) {
        num += x%10;
        x/=10;
    }
    
    if (origin % num != 0) {
        answer = false;
    }
    
    return answer;
}