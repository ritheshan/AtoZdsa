#include <vector>
#include <algorithm> // For std::find
using namespace std;

class Solution {
public:
    bool searchInSorted(vector<int> arr, int k) {
        // Use std::find to search for k in arr
        auto it = find(arr.begin(), arr.end(), k);
        if (it != arr.end()) return true;
        return false;
    }
};
