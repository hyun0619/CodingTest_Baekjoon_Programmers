#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    char target = letter[0];
    
    for (int i=0; i<my_string.length(); i++) {
        if (my_string[i] != target) answer += my_string[i];
    }
    
    return answer;
}