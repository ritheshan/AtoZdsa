#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k=target;
        unordered_map<int,int> map;
       for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (map.find(complement) != map.end()) {
                return {map[complement], i}; // Return indices of the two numbers
            }

            // Insert the current number and its index into the map
            map[nums[i]] = i;
        }
        return {};
    }

};