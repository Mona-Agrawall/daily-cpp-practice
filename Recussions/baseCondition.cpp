#include <iostream>
using namespace std;

int counter = 0;

void print() {
    if (counter >= 5) {
        cout << "We are done" << endl;
        return;
    }
    
    counter++;
    cout << counter << endl;
    print();
}

int main() {
    print();
}