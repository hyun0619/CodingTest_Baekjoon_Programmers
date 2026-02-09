#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <sstream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int year,month, day, total;
    map<char, int> t_map; // 유효기간을 저장할 맵
    vector<int> priv; // 각 개인정보 만료일을 '일' 단위로 변환해 저장할 벡터
    
    // 1. '일' 단위 총합 계산
    year = stoi(today.substr(0, 4));
    month = stoi(today.substr(5, 2));
    day = stoi(today.substr(8, 2));
    
    // 모든 달 28일로 계산
    total = year * 12 * 28 + (month-1) * 28 + day;
    
    // 2. 약관 정보 정리
    for (int i=0;i<terms.size(); i++) {
        stringstream ss(terms[i]);
        char alpha; int term_month;
        ss >> alpha >> term_month;
        t_map[alpha] = term_month; // 'A' -> 6 과 같은 형태로 맵에 저장
    }
    
    // 3. 개인정보별 만료일 계산
    for (int j=0; j<privacies.size(); j++) {
        int y = stoi(privacies[j].substr(0, 4)); 
        int m = stoi(privacies[j].substr(5, 2)); 
        int d = stoi(privacies[j].substr(8, 2));
        char a = privacies[j].back(); // 문자열의 마지막 문자가 약관 종류
        
        // 개인정보 수집 일자를 '일' 단위로 변환
        int collect_day = y * 12 * 28 + (m - 1) * 28 + d;
        
        // 만료일 계산
        int expire_day = collect_day + (t_map[a] * 28 - 1);
        
        priv.push_back(expire_day);
    }
    
    // 4. 오늘 날짜와 만료일 비교
    for(int i = 0; i < priv.size(); i++){
        if(priv[i] < total){
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}