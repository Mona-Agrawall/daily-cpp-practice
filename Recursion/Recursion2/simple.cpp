#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[5];
    for(int i = 0 ; i <n ; i++){
        cin >> arr[i];
    }

    int sum = 0;
    
    for(int i = 0; i<n ;i++){
        sum = sum + arr[i];
    }
    cout << "The sum value is: " << sum;
    return 0;
}