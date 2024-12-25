#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int max=0;

        for(int x:prices){
            if(x<min){
                min=x;
            }
             max=std::max(max,x-min);
        }

        return max;
    }
};