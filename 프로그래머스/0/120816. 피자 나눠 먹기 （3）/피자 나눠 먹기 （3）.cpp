#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    
    int answer = n/slice;
    int tmp = n%slice;
    
    if (tmp > 0) answer++;
    
    return answer;
}