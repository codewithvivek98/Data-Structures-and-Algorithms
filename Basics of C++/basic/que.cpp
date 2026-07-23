#include <iostream>
using namespace std;

int main() {

    // Question 1, sum of 2 numbers, taking number from user
    int a,b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int sum = a+b;
    cout << "a + b = " << sum << endl;


    // Question 2
    int x,y;
    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    int add = x+y, difference = x-y, division = x/y, multiply = x*y;
    cout << "Addition = " << add << endl << "Diffrence = " << difference << endl << "Division = " << division << endl << "Multiplication = " << multiply << endl; 


    return 0;
}