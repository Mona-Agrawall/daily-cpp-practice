#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2){
        cout << "A prime number.";
    }
    else{
        cout << "Not a prime number.";
    }

    return 0;
}