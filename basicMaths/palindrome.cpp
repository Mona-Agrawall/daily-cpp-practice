#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: "; //121
    cin >> n;

    int duplicate = n;
    //for extraction of the numbers
    int reverse = 0;
    while(n>0){
        int last = n%10;
        
        reverse = (reverse*10) + last;
        n = n/10;
    }

    if( duplicate == reverse){
        cout << "The given number is palindrome. ";
    }
    else{
        cout << "The given number is not a palindrome. ";
    }
    
    return 0;
}