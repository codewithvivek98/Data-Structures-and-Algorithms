#include <iostream>
using namespace std;


int n = 65; // global variable 

int main() {

    // check if the n is the power of 2 or not using loop
    //  int n = 32;
    int power = 1;
     while(power < n) {
        power *= 2;
     }
     if(power == n) {
        cout << "true" << endl;
     } else {
        cout << "false" << endl;
     }


     // check if the n is the power of 2 but don't use loops/ use bits 
    //  int n = 32;
     if(n>0 && (n & (n-1)) == 0) {
        cout << "true" << endl;
     } else {
        cout << "false" << endl;
     }


    return 0;
}