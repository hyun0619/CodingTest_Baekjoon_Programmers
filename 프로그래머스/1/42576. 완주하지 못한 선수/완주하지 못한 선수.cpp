#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> map;
    
    for (string p : participant) {
        map[p]++;
    }
    
    for (string c : completion) {
        map[c]--;
    }
    
    for (auto pair : map) {
        if (pair.second > 0) {
            return pair.first;
        }
    }
    
    return "";
}