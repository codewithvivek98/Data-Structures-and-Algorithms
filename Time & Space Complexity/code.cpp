#include <iostream>
using namespace std;

int main() {

    int arr[] = {6,7,9,10,2};
    int n = 5;
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }

    cout << "sorted Array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}