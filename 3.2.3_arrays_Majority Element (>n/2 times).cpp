class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        // Step 1: Find a candidate for the majority element
        for (int x : nums) {
            if (count == 0) {
                candidate = x;
            }
            count += (x == candidate) ? 1 : -1;
        }

        // Step 2: Verify the candidate (Optional if input guarantees a majority element)
        count = 0;
        for (int x : nums) {
            if (x == candidate) {
                count++;
            }
        }

        if (count > nums.size() / 2) {
            return candidate;
        }

        // If no majority element is found (shouldn't happen if input guarantees one)
        return -1; 
    }
 
 
    
};


//another approach using unordered_map
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Static comparator for sorting
    static bool compare(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    }

    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;

        // Count frequencies of elements
        for (int num : nums) {
            map[num]++;
        }

        // Convert the map to a vector of pairs
        vector<pair<int, int>> vec(map.begin(), map.end());

        // Sort the vector based on frequencies in descending order
        sort(vec.begin(), vec.end(), compare);

        // Return the element with the highest frequency
        return vec[0].first;
    }
};
