#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int dup = n;
    int rev = 0;

    while(n > 0){
        int last = n % 10;
        n = n / 10;
        rev = (rev * 10) + last;
    }
    cout << "The reverse number is: " << rev << endl;

    if(dup == rev){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }

    return 0;
}