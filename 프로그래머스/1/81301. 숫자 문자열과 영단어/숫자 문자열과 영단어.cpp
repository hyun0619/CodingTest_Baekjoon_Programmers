#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string s) {
    vector<string> num =  {"zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine"};
    string answer = "", tmp = "";
    
    for (int i=0; i<s.length();i++) {
        if (s[i] >= '0' && s[i] <='9') {
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