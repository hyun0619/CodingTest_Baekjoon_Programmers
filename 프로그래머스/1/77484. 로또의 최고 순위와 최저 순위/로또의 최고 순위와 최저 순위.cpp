#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int tmp1=0, tmp2=0;
    
    for (int i=0; i< lottos.size(); i++) {
        for (int j=0; j< win_nums.size(); j++) {
            if (lottos[i] == win_nums[j]) tmp1++;
        }
        if (lottos[i] == 0) tmp2++;
    }
    
    int result = tmp1+tmp2;
    
    for (int k=0; k<2; k++) {
        if (result == 6) answer.push_back(1);
        else if (result == 5) answer.push_back(2);
        else if (result == 4) answer.push_back(3);
        else if (result == 3) answer.push_back(4);
        else if (result == 2) answer.push_back(5);
        else if (result <= 1) answer.push_back(6);
        result = tmp1;
    }
    
    return answer;
}