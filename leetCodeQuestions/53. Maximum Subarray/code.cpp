#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
    public: 
    int maxSubArray(vector<int> nums) {
        int currentSum = 0, maxSum = INT_MIN;

        for(int val:nums) {
            currentSum += val;
            maxSum = max(currentSum, maxSum);

            if(currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;

    }
};





int main() {
    vector<int> nums = {1,3,4,5,6,0,-10};
    Solution obj;
    
    cout << "Max sum of sub Array: " << obj.maxSubArray(nums) << endl;

    return 0;
}