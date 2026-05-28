#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int max = nums.size()/2;
    
    unordered_set<int> types;
    
    for (int i : nums) {
        types.insert(i);
    }
    
    int count = types.size();
    
    return min(max, count);
}