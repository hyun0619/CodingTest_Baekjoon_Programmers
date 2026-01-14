#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    //더할 수 있는 모든 경우의 수 구하기
    for (int i=0;i<numbers.size(); i++) {
        for (int j=i+1;j<numbers.size(); j++) {
            answer.push_back(numbers[i]+numbers[j]);
        }
    }
    //unique 함수 사용을 위해 정렬
    sort(answer.begin(), answer.end());
    //unique 함수_중복 숫자 제거
    //erase 함수_빈 자리에 생긴 쓰레기 값 제거 
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    
    return answer;
}