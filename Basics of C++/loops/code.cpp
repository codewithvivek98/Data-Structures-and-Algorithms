#include <iostream>
using namespace std;

int main() {

    // while loop
    int count = 1;
    while(count <= 5) {
        cout << count << ". Hello\n";
        count++;
    }

    int n = 20;
    int ch = 1;
    while(ch <= n) {
        cout << ch << ". Vks\n";
        ch++;
    }

    // for loop
    // syntex: for(initilisation; condition; updation) {//work}
    int n1 = 5;
    for(int i = 1; i <= n1; i++) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}