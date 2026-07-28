#include <iostream>
using namespace std;


int main() {

    cout << sizeof(int) << endl; // 4Bytes = 32 bits --> store -2^31 to +2^31-1
    cout << sizeof(long int) << endl; // based on system also //4
    cout << sizeof(long long int) << endl;  // based on system also //8
    cout << sizeof(double) << endl;  //8
    cout << sizeof(short int) << endl; //2 reduce int by 2bytes 

    // signed stores both +ve and -ve numbers
    signed a = -5;
    cout << "Signed -ve value: " << a << endl;
    signed b = 5;
    cout << "Signed +ve value: " << b << endl;


    // unsigned only stores +ve numbers
    unsigned x = -10;
    cout << "Unsigned -ve value:" << x << endl; // binary to decimal output
    unsigned y = 10;
    cout << "Unsigned +ve value:" << y << endl;; // prints 10 normally

    return 0;
}