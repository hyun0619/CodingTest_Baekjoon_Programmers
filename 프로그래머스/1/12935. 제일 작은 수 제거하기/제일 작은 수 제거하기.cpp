#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int temp = 0;

    if (arr.size() == 1) {
        arr.pop_back();
        arr.push_back(-1);
        return arr;
    }

    for (int i=0;i<arr.size();i++) {
        if (arr[i] < arr[temp]) {
            temp = i;
        }
    }
    
    arr.erase(arr.begin()+ temp);
    
    return arr;
}