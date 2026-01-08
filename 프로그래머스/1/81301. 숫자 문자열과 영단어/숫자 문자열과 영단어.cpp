#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    string answer = "", tmp = "";
    
    vector<string> num =  {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i=0; i<s.size(); i++) {
        if ('0' <= s[i] && '9'>= s[i]) {
            answer += s[i];
        }
        else tmp += s[i];
        if (find(num.begin(), num.end(), tmp) != num.end()) {
            answer += to_string(find(num.begin(), num.end(), tmp) - num.begin());
            tmp = "";
        }
    }
    
    return stoi(answer);
}