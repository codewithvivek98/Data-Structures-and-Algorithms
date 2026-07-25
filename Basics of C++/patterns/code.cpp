#include <iostream>
using namespace std;

int main() {

    ///// 1. Pattern 1 --> Square pattern
//    int n = 4;
//    for(int i = 1; i <= n; i++) { // outer loop
//     int m = 4;
//     for(int j = 1; j <= m; j++) { // inner
//         cout << j << " ";
//     }
//     cout << endl;
//    }

//if i starts from 0 --> same output 
// int n = 5;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n; j++) {
//         cout << " *";
//     }
//     cout << endl;
// }

//printing characters from A to n number
// int n = 4;

// for(int i=0; i<n; i++) {
//     char ch = 'A'; // starting value --> always same
//     for(int j=0; j<n; j++) {
//         cout << ch << " ";
//         ch += 1;  //A--> 65 then (ch += 1 --> 66), that is B, then continue 
//     }
//     cout << endl;
// }


/////2. square pattern but non repeating terms
// int n = 4;
// int num = 1;

// for(int i=0; i<n; i++) {
//     for(int j=0; j<n; j++) {
//         cout << num << " ";
//         num++;
//     }
//     cout << endl;
// }
// hw1



// 3. Triangle pattern ,, right angle triangle
// int n = 4;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<i+1; j++) {
//         cout << " *";
//     }
//     cout << endl;
// }

// triangle for numbers --> repeating 
// int n = 4;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<i+1; j++) {
//         cout << i+1 << " ";
//     }
//     cout << endl;
// }

// int n = 4;
// for(int i=0; i<=n-1; i++) {
//     for(int j=1; j<=i+1; j++) {
//         cout << j << " ";
//     }
//     cout << endl;
// }


// reverse triangle pattern
int n = 4;
for(int i=0; i<n; i++) {
   for(int j=i+1; j>0; j--) {
    cout << j << " ";
   }
   cout << endl;
}



    return 0;
}