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


// function to print intersection(common elements) of 2 array
void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    for(int i=0; i<size1; i++) {
        for(int j=0; j<size2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;  // Prevents printing the same arr1[i] multiple times
            }
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
    cout << endl;



    int arr1[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 4, 5, 1, 6, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection: ";
    printIntersection(arr1, size1, arr2, size2);

    return 0;
}