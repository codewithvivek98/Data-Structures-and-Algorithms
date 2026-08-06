#include <iostream>
#include <vector>
using namespace std;
// TC is 0(n^2)
int majorityElement(vector<int> nums) {
    int n = nums.size();
    for(int val:nums) {
        int freq = 0;

        for(int el:nums) {
            if(el == val) {
                freq++;
            }
        }
        if(freq > n/2) {
            return val;
        }
    }
    return -1;
}



int main() {
    vector<int> nums = {2,2,2,2,3,};
    cout << "Majority element: " << majorityElement(nums) << endl;

    return 0;
}
