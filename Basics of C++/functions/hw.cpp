#include <iostream>
using namespace std;


// Que 1. WAF to check whethe a number  is prime or not
    void checkPrime(int n) {
    if (n <= 1) {
        cout << "Non prime number";
        return;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "Non prime number";
            return;
        }
    }
    cout << "Prime number";
}


// for question 2
bool isPrime(int n) {
    if(n<=1)
        return false;

        for(int i=2; i<n; i++) {
            if(n%i == 0) 
                return false;
        }
        return true;
    
}
// Que 2. WAF to print all prime number from 1 to n
void allPrime(int n) {
    for(int i=2; i<=7; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
}



int main() {

    checkPrime(7);
    
    cout << endl;

    cout << isPrime(7);

    cout << endl;

    allPrime(100);


    return 0;
}