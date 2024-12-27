#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> res;
        int maxSoFar = arr[arr.size() - 1];  // The rightmost element is always a leader
        res.push_back(maxSoFar);

        // Traverse the array from right to left
        for (int i = arr.size() - 2; i >= 0; i--) {
            if (arr[i] >= maxSoFar) {
                res.push_back(arr[i]);  // If current element is greater than or equal to maxSoFar, it is a leader
                maxSoFar = arr[i];  // Update maxSoFar
            }
        }

        // Reverse the result array to get the leaders in the correct order
        reverse(res.begin(), res.end());
        return res;
    }
};
