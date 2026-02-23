#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << endl;

    cout << "Enter the second number: ";
    cin >> n2;
    cout << endl;

    while(n1 > 0 && n2 > 0){
        if(n1>n2){
            n1 = n1 % n2;
        }
        else {
            n2 = n2 % n1;
        }

        if(n1==0){
            cout << " The GCD is: " << n2;
        }
        if(n2==0){
            cout << "The GCD is: " << n1;
        }

    }
    return 0;
}