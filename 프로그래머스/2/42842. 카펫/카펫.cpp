#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int totalArea = brown+yellow;
    int tmp1=0, tmp2=0;
    
    for (int h=3; h*h<=totalArea; h++) {
        if (totalArea%h==0) {
            int w = totalArea/h;
            if ((w - 2) * (h - 2) == yellow) {
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }
    }   
    return answer;
}