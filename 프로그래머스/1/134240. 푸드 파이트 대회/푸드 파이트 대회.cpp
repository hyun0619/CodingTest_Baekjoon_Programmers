#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    //1~n번까지 순차적으로 값 넣기
    for (int i=1; i<food.size(); i++) {
        if (food[i] > 1) {
            for (int j=0; j<food[i]/2; j++) {
                answer += to_string(i);
            }
        }
    }
    //0번 값 넣기
    answer += to_string(0);
    
    //1~n번을 역순으로 값 넣기
    //유효 인덱스는 0~N-1까지라서 -1 해줘야함
    for (int j=food.size()-1; j>0; j--) {
        if (food[j] > 1) {
            for (int k=0; k<food[j]/2; k++) {
                answer += to_string(j);
            }
        }
    }
    
    return answer;
}