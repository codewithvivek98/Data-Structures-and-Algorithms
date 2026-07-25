#include <iostream>
using namespace std;

int main() {
 
    // Que1: SUM of number from 1 to n
    // int n = 3;
    // int sum  = 0;
    // for(int i = 1; i <= n; i++) {
    //     sum += i;
    // }
    // cout << "sum is : " << sum << endl;

    //using formula 
    // int a = 3;
    // int s = a*(n+1)/2;
    // cout << s;

    // using while loop
    // int n1 = 3, sum1 = 0, i1 = 1;
    // while(i1 <= n1) {
    //     sum1 += i1;
    //     i1++;
    // }
    // cout << sum1 << endl;


    // sum of odd numbers from 1 to n
    // int n2;
    // cout << "enter a number: ";
    // cin >> n2;
    // int oddSum = 0;
    // for(int i2 = 1; i2 <= n2; i2 = i2+2) {
    //     oddSum += i2;
    // }
    // cout << "Sum of odd numbers: " << oddSum << endl;

    // sum of even numbers from 1 to n
    // int n = 4;
    // int evenSum = 0;
    // for(int i = 1; i <= n; i++) {
    //     if(i %2 == 0) {
    //         evenSum += i;
    //     }
    // }
    // cout << "Sum of even numbers: " << evenSum << endl;


    // do-while loop
    // int n = 10;
    // int i = 1;

    // do{
    //     cout << i << " ";
    //     i++;
    // } while(i <= n);
    // cout << endl;


    // Check if the number is prime or not 
    // int n = 13;
    // bool isPrime = true;
    
    // for(int i = 2; i <= n-1; i++) { // or (i*i < n) do same work
    //     if(n % i == 0) {  // non prime condition
    //     isPrime = false;
    //     break;
    //     }
    // }
    // if(isPrime == true) {
    //     cout << "Prime number\n";
    // } else {
    //     cout << "Non prime number\n";
    // }



    // Nested Loops --> loop inside loop
    // for(int i = 1; i <= 5; i++) {  // using for loops, patterns
    //     cout << "* * * * *" << endl;
    // }
    int n = 10; // number of column
    for(int i = 1; i <= n; i++){ // outer loop for number of column

        int m = 5; // number of rows
        for(int j = 1; j <= m; j++) {  // Inner loop for number of rows
            cout << " *";
        }
        cout << endl;
    }

    
    






    return 0;
}