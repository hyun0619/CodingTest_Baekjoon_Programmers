#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int tmp1, tmp2;
    
    for (int i=0; i<=n; i++) {
        if (i == 0) tmp1 = 0;
        if (i == 1) tmp2 = 1;
        if (i >= 2) {
            answer = (tmp1+tmp2)%1234567;
            tmp1 = tmp2;
            tmp2 = answer;
        }   
    }
    return answer;
}