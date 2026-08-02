#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public: 
    int singleNumber(vector<int> & nums) {
        int ans = 0;
        for(int val:nums) {
            ans = ans^val;  // XOR
        }
        return ans;
    }
};



int main() {

    vector<int> nums = {1,1,2,2,3,3,5};
    Solution obj;
    cout << obj.singleNumber(nums) << endl;

    return 0;
}