#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for (int i=0; i<=t.length()-p.length();i++) {
        string tmp = t.substr(i, p.length());
        long long num2 = stol(tmp); //stoi가 아닌 long인 stol
        long long num1 = stol(p);
        
        if (num1 >= num2) answer++;
    }
    
    
    return answer;
}