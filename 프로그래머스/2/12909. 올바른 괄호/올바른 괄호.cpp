#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int balance = 0;
    
    for (char c : s) {
        if (c == '(') balance++;
        else if (c == ')') balance--;
        
        if (balance < 0) return false;
    }
    
    return balance == 0;
}