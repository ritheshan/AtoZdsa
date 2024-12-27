#include<vector>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        // Sort the array
        sort(nums.begin(), nums.end());

        int maxLength = 1;  // At least one element exists, so min sequence length is 1
        int currentLength = 1;  // Current consecutive sequence length

        // Use iterators to traverse the array
        for (auto it = nums.begin() + 1; it != nums.end(); ++it) {
            if (*it != *(it - 1)) {  // Skip duplicates
                if (*it == *(it - 1) + 1) {
                    currentLength++;  // Increase length of the current consecutive sequence
                } else {
                    currentLength = 1;  // Reset for a new sequence
                }
                maxLength = max(maxLength, currentLength);  // Update the maximum length
            }
        }

        return maxLength;
    }
};