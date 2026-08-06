#include <iostream>
using namespace std;

// finding element in array using linear search operation
int linearSearch(int arr[], int size, int targetVal) {
    for(int i=0; i<size; i++) {
        if(arr[i] == targetVal) { // Found
            return i;
        }
    }
    return -1; // Not found 
}

// reverse an array elements using 2-POINTER APPROACH / done in code.cpp using reverse() function
// uses start and end --> that's why 2 pointer approach and have TC O(n)
int reverseArray(int arr[], int size) {
    int start = 0; //starting index
    int end = size-1; // ending index
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int main() {


    // Linear Search in array
    // int arr[] = {4,5,6,3,7,2,5};
    // int size = 7;
    // int targetVal = 9;
    // cout << linearSearch(arr, size, targetVal) << endl; 


    // taking target value from user
    // int arr[] = {6,7,8,9,10,56,7};
    // int size = 7;
    // int targetVal;
    // cout << "Enter value to find in array: ";
    // cin >> targetVal;
    // cout << linearSearch(arr,size,targetVal) << endl;
    // Linear search have time complexicity as "O(n)"
    

// using reverseArray() 
int arr[] = {1,2,3,4,5,6,7,8,9};
int size = 9;
reverseArray(arr, size);

for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
}
cout << endl;
    


    return 0;
}