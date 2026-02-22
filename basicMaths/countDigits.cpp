#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count = 0;
    while(n>0){
        int lastDigit = n % 10;
        count++;
        n = n / 10;
    }
    cout << count;
    return 0;
}