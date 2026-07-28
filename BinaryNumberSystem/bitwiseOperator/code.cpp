#include <iostream>
using namespace std;


int main() {
    // Bitwise operators
    int a = 4, b = 8;

    cout << (a & b) << endl; //0
    cout << (a | b) << endl; //12
    cout << (a ^ b) << endl; //12

    cout << (4 << 1) << endl; //8
    cout << (10 << 2) << endl; //40
    cout << (10 >> 2) << endl; //2


    //Homework questions
    cout << (6 & 10) << endl; //2
    cout << (6 | 10) << endl; //7
    cout << (6 ^ 10) << endl;

    cout << (10 << 2) << endl;
    cout << (10 >> 1) << endl;



    return 0;
}