#include <iostream>
using namespace std;

int main() {

    // if-else
    int age;
   cout << "Enter you age: ";
   cin >> age;

   if(age >= 18) {
    cout << "You are elegible to vote\n";
   } else {
    cout << "You are not elegible to vote\n";
   }

   // check for odd an even number 
   int n;
   cout << "Enter a number: ";
   cin >> n;

   if (n %2 == 0) {
    cout << "Entered number is even";
   } else {
    cout << "Entered number is odd";
   }


   // if-else if-else --> for checking multiple conditions


    return 0;
}