#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
    public: 
    int maxProduct(vector<int> & nums) {
        int n = nums.size();
        int leftProduct = 1, rightProduct = 1, ans = nums[0];

        for(int i=0; i<n; i++) {

            if(leftProduct == 0) 
            leftProduct = 1;

            if(rightProduct == 0) 
            rightProduct = 1;

            leftProduct *= nums[i];
            rightProduct *= nums[n-1-i];

            ans = max(ans, max(leftProduct, rightProduct));
        }
        return ans;
        
    }
};



int main() {
    vector<int> nums = {2,3,-2,4};
    // int n = sizeof(arr) / sizeof(arr[0]);
    Solution obj;

    cout << obj.maxProduct(nums);



    return 0;
}