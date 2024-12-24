#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=count(nums.begin(),nums.end(),0);
        int one=count(nums.begin(),nums.end(),1);
        int two=count(nums.begin(),nums.end(),2);
        int k=0;
        for(int i=0;i<zero;i++){
            nums[k++]=0;
        }
        for(int i=0;i<one;i++){
            nums[k++]=1;
        }
        for(int i=0;i<two;i++){
            nums[k++]=2;
        }
    }
};
// another approach dutch national flag problem method
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }

        
    }
}; 