#include <iostream> 
using namespace std;

int main() {
    int age = 25;
    cout << sizeof(age) << endl ;

    // Type conversion
    char grade = 'A'; //65 --< ASCII character
    int value = grade;
    cout << value << endl;

    // type casting; big data --> small data 
    double price = 1000.99;
    int newPrice = (int)price;
    cout << newPrice << endl; // 1000


    // taking input from the user
    int userAge;
    cout << "Enter your age: ";
    cin >> userAge;

    cout << "Your age is: "<< userAge << endl;

    // Operators //
    // 1.arthematic
    // 2.relational (<, <=, >, >=, ==, !=) always return boolean values
    // 3.logical 
    // a.(OR--> || (checks conditions between 2 statements))
    cout << ((3 < 1) || (3 < 5)) << endl; // one statemenrt ture --> true 1
    cout << ((3 > 5) || (4 > 8)) << endl; // both are false --> false 0
    // b.(AND--> && (checks condition between 2 statement)),
    cout << ((3 < 1) && (3 < 2)) << endl; // both are false --> false 0
    cout << ((3 > 1) && (3 > 2)) << endl; //both are true --> true 1

    // c.(NOT--> ! (true <--> false))


    // Urinary operator
    // a++, ++a  and  a--, --a
    

    return 0;
}