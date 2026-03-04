#include <string>
#include <vector>

using namespace std;

// 최대 공약수 구하는 gcd
int gcd(int x, int y) { return x % y == 0 ? y : gcd(y, x % y); }
// 최소 공배수 구하는 lcm 
int lcm(int x, int y) { return x * y / gcd(x, y); }

int solution(vector<int> arr) {
    int answer = arr[0];
    for (int i = 1; i < arr.size(); i++)
        answer = lcm(answer, arr[i]);
    return answer;
}