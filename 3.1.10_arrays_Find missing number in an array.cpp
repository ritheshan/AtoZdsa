#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // Sum of first n natural numbers
        int sum_n = (n * (n + 1)) / 2;
        
        // Sum of elements in the array
        int sum_arr = 0;
        for (int num : nums) {
            sum_arr += num;
        }
        
        // The missing number
        return sum_n - sum_arr;
    }
};
//another analogy for this code 
#include <vector>
using namespace std;
class Solution {
public:

int missingNumber(vector<int>&a) {

    int xor1 = 0, xor2 = 0;
    int N=a.size();

    for (int i = 0; i < N; i++) {
        xor2 = xor2 ^ a[i]; // XOR of array elements
        xor1 = xor1 ^ (i ); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}
};