#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int targetVal) {
    vector<int> ans; // empty vector
    int n = nums.size();

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(nums[i] + nums[j] == targetVal) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}


int main() {
    vector<int> nums = {1,2,3,4,5};
    int targetVal = 9;

    vector<int> ans = pairSum(nums, targetVal);
    cout << "Target value find at index: " << ans[0] << " and " << ans[1] << endl;


    return 0;
}