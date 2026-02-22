#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n; //1012
    int revNum = 0;
    while(n>0){
        int lastDigit = n%10; //2
        n = n/10; //101
        revNum = (revNum*10) + lastDigit;

    }
    cout << revNum;
    return 0;
}