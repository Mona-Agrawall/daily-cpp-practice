#include<iostream>
using namespace std;

int main(){
    int a;
    int* ptr;
    ptr = &a;
    cout << ptr;
    cout << endl;
    cout << *ptr;
    cout << endl;
    int** ptr2;
    ptr2 = &ptr;

    cout << ptr2;
    return 0;
}