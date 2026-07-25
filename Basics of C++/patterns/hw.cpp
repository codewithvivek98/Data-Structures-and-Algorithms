#include <iostream>
using namespace std;

int main() {

    // Printing character
    // int n = 4;
    // char ch = 'A';
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }


    // Printing characters in right angle triangle 
    // int n = 4;
    // char ch = 'A';
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<i+1; j++) {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // } 

///////
    // int n = 4;
    // char ch = 'A';
    // for(int i=0; i<=n-1; i++) {
    //     for(int j=1; j<=i+1; j++) {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }


   // // butterfly pattern
    //upper half
    int n =4;
    for(int i=1; i<=n; i++) {

        //left start
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        //space
        for(int j=1; j<=2*(n-i); j++) {
            cout << " ";
        }

        //Right star
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    ////lower half
    for(int i=n; i>=1; i--) {
        //left start
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        //space
        for(int j=1; j<=2*(n-i); j++) {
            cout << " ";
        }

        //right star
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}