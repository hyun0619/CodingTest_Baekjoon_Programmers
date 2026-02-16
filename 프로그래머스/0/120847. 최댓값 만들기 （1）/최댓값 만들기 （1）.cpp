#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    for (int i=0; i<numbers.size(); i++) {
        for (int j=i+1; j<numbers.size(); j++) {
            int tmp = numbers[i] * numbers[j];
            
            if (tmp > answer) answer = tmp; 
        }
    }
    
    return answer;
}