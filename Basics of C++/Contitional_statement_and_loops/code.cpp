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
    cout << "Entered number is even\n";
   } else {
    cout << "Entered number is odd\n";
   }


   // if-else if-else --> for checking multiple conditions
   int marks;
   cout << "Enter marks: ";
   cin >> marks;

   if(marks >= 90) {
    cout << "Grade A\n";
   } else if(marks >= 80 && marks < 90 ) {
    cout << "Grade B\n";
   } else {
    cout << "Grade C\n";
   }

//find character upercase or lowercase using albhabets 
char ch;
cout << "enter character: ";
cin >> ch;

if(ch >= 'a' && ch <= 'z') {
    cout << "lowercase\n";
} else {
    cout << "uppercase\n";
}

// find character upercase or lowercase using Numbers (ASCII), using implect type cpnversion
char num;
cout << "enter character: ";
cin >> num;

if(num >= 65 && num <= 96) {
    cout << "uppercase\n";
} else {
    cout << "lowercase\n";
}

// Ternary statement
// syntex: condition ? true:false;
int numch;
cout << "enter a number: ";
cin >> numch;
cout << ((numch>=0? "Positive number": "Negative number")) << endl; 

    return 0;
}