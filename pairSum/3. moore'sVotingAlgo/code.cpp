#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    int majorityElement(vector<int> & nums) {
        int n = nums.size();
        int freq = 0, ans = 0;
        for(int i=0; i<n; i++) {

            if(freq == 0) {
                ans = nums[i];
            }
            if(ans == nums[i]) {
                freq++;
            }
            else {
                freq--;
            }
        }
        int count  = 0;
        for(int val:nums) {
            if(val == ans) {
                count++;
            }
        }
        if(count > n/2) {
            ans;
        } else {
            return -1; // if no majority element exist;
        }
        return ans;
    }
   
};

int main() {
    vector<int> nums = {1,2,3,4};
    Solution obj;
    cout << "Majority element: " << obj.majorityElement(nums) << endl;

    return 0;
}