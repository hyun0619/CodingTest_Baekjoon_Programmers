#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int num = 0;
    
    stringstream ss(s);
    
    ss >> num;
    int min_num = num, max_num = num;
    
    while (ss >> num) {
        min_num = min(min_num, num);
        max_num = max(max_num, num);
    }
    
    answer = to_string(min_num) + " " + to_string(max_num);
        
    return answer;
}