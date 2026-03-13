#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string a = to_string(n);
    
    for (int i=0; i<a.length(); i++) {
        answer += a[i] - '0';
    }
    
    return answer;
}