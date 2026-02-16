#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = 0;
    int tmp = 1;
    
    for (int i=0; i<t;i++) {
        answer = tmp * 2;
        tmp = answer;
    }
    answer *= n;
    return answer;
}