#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {90,12,45,67,89};
    marks[0] = 100; // change the marks at index 0 
    cout << marks[0] << endl; // access element of array using index

    // cout << sizeof(marks) << endl; // 1 element takes 4bytes; so 5 elements = 4*5 -> 20bytes
    // cout << sizeof(marks)/sizeof(int) << endl; // gives size of array

    //loops on array: 0 to size-1. indexing
    // int size = 5;
    // for(int i=0; i<size; i++) {
    //     cout << marks[i] << endl;
    // }

    // taking input for array
    // int n = 6;
    // int InputMarks[6];
    // cout << "Enter marks of " << n << " students: ";
    // for(int i=0; i<n; i++) {
    //     cin >> InputMarks[i];
    // }
    // cout << "Array elements are: "; 
    // for(int i=0; i<n; i++) {
    //     cout << InputMarks[i] << " ";
    // }


    
    // Reverse an array
    int arr1[] = {20, 50, 80, 89, 92};
    int sz = 5;
    for(int i=0; i<sz; i++) {
        cout << arr1[i] << " "; 
    }
    cout << endl;
    // print reversed array
    reverse(arr1, arr1 + sz);
    for(int i=0; i<sz; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    string s = "HELLO";
    reverse(s.begin(), s.end());
    cout << s;

    

    



    return 0;
}