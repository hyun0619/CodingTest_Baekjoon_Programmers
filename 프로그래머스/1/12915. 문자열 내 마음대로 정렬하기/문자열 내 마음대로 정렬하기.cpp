#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    
    //정렬 기준 부분에서 람다 함수 사용
    //복사 비용 때문에 const 참조자로 받는 게 실무에선 유리
    sort(strings.begin(), strings.end(), [n](const string& a, const string& b) {
        //n번째 문자 같은 경우 - 전체 문자열 기준_오름차순 정리
        if (a[n] == b[n]) return a<b;
        //n번째 문자 다른 경우 - n번째 문자 기준_오름차순 정리
        return a[n] < b[n];
    });
    
    return strings;
}