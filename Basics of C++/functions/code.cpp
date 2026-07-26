#include <iostream>
using namespace std;


// function for sum of 2 numbers
int sum(int a, int b) {
    int s = a+b;
    return s;
}

// Minimum of 2 numbers
void findMin(double a, double b) {
    if(a < b) {
        cout << "This is smaller: " << a << endl;
    } else if(a > b) {
        cout << "This is smaller: " << b << endl;
    } else {
        cout << "Both are equal" << endl;
    }
}

// Sum of numbers fron 1 to n
void sumN(int n) {
    int sum=0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "sum is: " << sum;
}

// n factorial
int factorial(int n) {
    int fact = 1;
    
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

// pass by value; example
void changeX(int x) {
    x *= 2;
    cout << "x from function changeX: " << x << endl;
}

// sum of digits of a number 
int sumOfDigits(long long num) {  // long long --> for entering very large integer value
    int digitSum = 0;
    
    while(num>0) {
        int lastDigit = num % 10;
        num = num/10;
        digitSum += lastDigit;
    }
    return digitSum;
}

// calculate nCr bionomial cofficient for n and r ; using factorial(); using function inside function
// formula --> nCr = n! / r!(n-r)!
int nCr(long long n, long long r) {
    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    int factorial_difference = factorial(n-r);

    return 
    factorial_n / (factorial_r * factorial_difference);
}


int main() {
    //calling the function
    // cout << "sum is: " << sum(2,4) << endl;

    // findMin(10.1,10);
    // sumN(3);
    // cout << factorial(0);

    // pass by value
    // int x = 5;
    // changeX(6); // 12
    // cout << "x from main function: " << x << endl;

    // cout << "sum of digit is: " << sumOfDigits(35486487644454865) << endl;

    cout << "Factorial is: " << nCr(15,5) << endl;;
    




    return 0;
}