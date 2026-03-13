#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for (int i=0; i<my_string.length(); i++) {
        if (my_string[i] == '1' || my_string[i] == '2' ||
           my_string[i] == '3' || my_string[i] == '4' ||
           my_string[i] == '5' || my_string[i] == '6' ||
           my_string[i] == '7' || my_string[i] == '8' ||
           my_string[i] == '9')
            answer += my_string[i] - '0';
    }
    
    return answer;
}