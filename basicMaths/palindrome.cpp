#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int duplicate = n;

    int rev = 0;
    while(n>0){
        int last = n % 10;
        n = n/10;
        rev = (rev*10) + last;
    }

    cout << "The reverse number is: " << rev << endl;
    cout << "The original Number is: " << duplicate <<  endl;
    if(duplicate==rev){
        cout << "Yes the num is a palindrome.";
    }
    else{
        cout << "No the number is not a palindrome. ";
    }
    return 0;
}