#include <iostream>
#include <climits>
using namespace std;

int n = 3;
int arr[] = {1, 2, 3};

int main() {

    // printing subArray of an array; TC os 0(n^3)
   for(int start=0; start<n; start++) {
    for(int end=start; end<n; end++) {
        for(int i=start; i<=end; i++) {
            cout << arr[i];
        }
        cout << " ";
    }
    cout << endl;
   }

   // maximum subArray sum using BRUTE FORCE approach: TC is 0(n^2)
   int maxSum = INT_MIN;
   for(int start=0; start<n; start++) {
    int currentSum = 0;
    for(int end=start; end<n; end++) {
        currentSum += arr[end];
        maxSum = max(currentSum, maxSum);
    }

   }
    cout << "Maximum sum of sub array using bruete force approach: " << maxSum << endl;

    //  maximum subArray sum using Kadane's Algorithm: TC is 0(n)
    int currentSum = 0;
    int maximumSum = INT_MIN;
    for(int i=0; i<n; i++) {
        currentSum += arr[i];
        maximumSum = max(currentSum, maximumSum);
        if(currentSum < 0) {
            currentSum = 0;
        }
    }
     cout << "Maximum sum of sub array using Kadane's Algorithm: " << maximumSum << endl;



    return 0;
}