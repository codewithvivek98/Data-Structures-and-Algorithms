#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// funtion for decimal to binary number using power of 10
int decToBinary(int decNum) {
    int ans = 0;
    int power = 1; // initially power is 10^0 = 1

    while(decNum > 0) {
        int remainder = decNum % 2;
        decNum /= 2;
        ans += (remainder*power);
        power *= 10;  //increase the power of 2 
    }
    return ans;
}

// decimal to binary using reverse() function
void decimalToBinary(int decimal) {
    if(decimal == 0) {
        cout << "0";
        return;
    }

    string storeBinary = "";
    while(decimal > 0) {
        storeBinary += (decimal % 2) + '0';
        decimal /= 2;
    }
    reverse(storeBinary.begin(), storeBinary.end());
    cout << storeBinary;
}

// Binary to decimal
int binaryToDecimal(int binaryNum) {
    int ans = 0, power = 1; 

    while(binaryNum > 0) {
        int remainder = binaryNum % 10;
        ans += remainder*power;
        binaryNum /= 10;
        power *= 2;
    }
    return ans;
}


int main() {

    // for(int i=0; i<=10; i++) {
    //     cout << decToBinary(i) << endl;
    // }
    // cout << endl;
    
    // decimalToBinary(25);
    // cout << endl;

    cout << binaryToDecimal(100100);
     // cout << endl;



    return 0;
}