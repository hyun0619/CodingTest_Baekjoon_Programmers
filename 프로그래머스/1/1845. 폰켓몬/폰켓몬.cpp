#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    // 전체값/2
    int max = nums.size()/2;
    // 중복 없이 담아둘 곳
    unordered_set<int> types;
    
    // 중복 제거
    for (int i : nums) {
        types.insert(i);
    }
    
    int count = types.size();
    
    // 둘 중 더 작은 값이 답
    return min(max, count);
}