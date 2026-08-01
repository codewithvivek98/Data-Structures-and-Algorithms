#include <iostream> 
#include <vector>
using namespace std;

int main() {
    vector<int> vec1(3,5); // prints 3 time 5
    for(int val: vec1) {
        cout << val << " ";
    }
    cout << endl;

    vector<char> vec2 = {'a', 'b', 'c', 'd'};
    for(char character: vec2) {
        cout << character << " ";
    }
    cout << endl;


    vector<int> v = {1,2,3,4,5};
    v.size();
    cout << "Size of initial vector: "  << v.size() << endl;
    cout << "Initial elements of vector: ";
    for (int val:v) {
        cout  << val << " ";
    }
    cout << endl;

    v.push_back(90);
    cout << "Vector after puch_back: ";
    for (int val:v) {
        cout << val << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "Vector after pop_back: ";
    for (int val:v) {
        cout << val << " ";
    }
    cout << endl;

    cout << "first value of vector is: " << v.front() << endl;
    cout << "last value of vector is: " << v.back() << endl;
    cout << "value of vector at enter index: " << v.at(4) << endl;
    cout << v.empty() << endl; // true=1 if empty otherwise false=0
    cout << "Capacity of vector v: " << v.capacity() << endl;

    // insert()
    // v.insert(v.begin() + index, value);
    v.insert(v.begin() + 2, 50);
    cout << "Elemnt after insert value at entered index: ";
    for(int val:v) {
        cout << val << " ";
    }



    
    return 0;
}