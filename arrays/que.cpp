#include <iostream>
#include <climits> // for INT_MAX
using namespace std;


int main() {
    // QUESTION 1. find the smallest and largest value from array
    int arr[] = {1, 2, -15, 67, 90};  //array
    int size = 5; // size of array
    int smallestNum = INT_MAX; // INT_MAX --> +Infinity  // to check array elements
    int largestNum = INT_MIN;  // INT_MIN --> -Infinity
    for(int i=0; i<size; i++) {
        if(arr[i] < smallestNum) {
            smallestNum = arr[i];
        }
    }
    cout << "Smallest number: " << smallestNum << endl;

    // Same output using min() and max() function:
    for(int i=0; i<size; i++) {
        smallestNum = min(arr[i], smallestNum); // Give minimum value from array
        largestNum = max(arr[i],largestNum); // Give maximum value from array
    }
    cout << "Smallest number using min() function: " << smallestNum << endl;
    cout << "Largets number using max() function: " << largestNum << endl;

    // printing index of smallest number:
    for(int i=0; i<size; i++) {
        if(arr[i] == smallestNum) {
            cout << "Smallest number at index: " << i << endl;
            break;
        }
    }
    // printing index of largest number:
    for(int i=0; i<size; i++) {
        if(arr[i] == largestNum) {
            cout << "Largest number at index: " << i << endl;
            break;
        }
    }




    return 0;
}