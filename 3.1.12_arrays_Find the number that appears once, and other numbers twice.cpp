#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         if(nums.size()==1) return nums[0];
          std::map<int, int> frequency;

    // Count frequencies
    for (int num : nums) {
        frequency[num]++;
    }
    vector<pair<int,int>> vec(frequency.begin(),frequency.end());
    std::sort(vec.begin(), vec.end(),
              [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
                  return a.second < b.second; // Sort in ascending order of values
              });
              
                return vec[0].first;
    }
    
};

// another approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int prashant=0;
        for(int i=0;i<nums.size();i++)
        {
            prashant=prashant^nums[i];
        }
        return prashant;
    }
};