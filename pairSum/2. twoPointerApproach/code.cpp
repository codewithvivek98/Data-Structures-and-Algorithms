#include <iostream>
#include <vector>
using namespace std;
// vetor elements arragned in assencding order;
// its TC 0(n);
vector<int> pairSum(vector<int> nums, int targetVal) {
    vector<int> ans;
    int n = nums.size();
    int i=0, j=n-1;
    while(i < j) {
        int pairSum = nums[i] + nums[j];

        if(pairSum > targetVal) {
            j--;
        } else if(pairSum < targetVal) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {

    vector<int> nums = {2,7,11,15};
    int targetVal = 26;

    vector<int> ans = pairSum(nums, targetVal);
    cout << "Target pairsum at index: " << ans[0] << " and " << ans[1];


    return 0;
}