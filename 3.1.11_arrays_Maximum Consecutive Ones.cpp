
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, result = 0;

        for (int x : nums) {
            if (x == 1) {
                count++;
                result = std::max(count, result);  // Use std::max here with the renamed variable
            } else {
                count = 0;
            }
        }
        return result;
    }
};
