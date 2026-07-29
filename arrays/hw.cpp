#include <iostream>
// #include <climits>
using namespace std;

// WAF to calculate sum of all numbers in array
int findSum(int arr[], int size) {
   int sum = 0;
   for(int i=0; i<size; i++) {
    sum += arr[i];
   }
   return sum;
}

// WAF to calculate product of all numbers in array
int findProduct(int arr[], int size) {
    int product = 1;
    for(int i=0; i<size; i++) {
        product *= arr[i];
    }
    return product;
}

// swaps max and min
void swapMaxAndMin(int arr[], int size) {
    int minIndex = 0, maxIndex = 0;  // initally assumed that max, min valuse at index 0;
    for(int i=1; i< size; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]) {
        maxIndex = i;
    }
  }
  swap(arr[minIndex], arr[maxIndex]);
    

}

//function to print unique from arrays
void printUniqueValues(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;
        // Check if the current element has already appeared
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        // Print only if it has not appeared before
        if (!isDuplicate) {
            cout << arr[i] << " ";
        }
    }
}

int main() {


    int arr[] = {1,2,3,5,6,5,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array numbers is: " << findSum(arr, size) << endl;
    cout << "Product of array numbers is: " << findProduct(arr, size) << endl;


// code for swaping
    // cout << "Original Array: " << " ";
    // for(int i=0; i<size; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // swapMaxAndMin(arr, size);
    // cout << "Array after swapping max and min: " << " ";
    // for(int i=0; i<size; i++) {
    //     cout << arr[i] << " ";
    // }
    
    cout << "Unique elements: ";
    printUniqueValues(arr, size);

    return 0;
}