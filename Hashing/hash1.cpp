#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the elements: " ;
    cin >> n;
    int arr[n];

    cout << "enter the elements in array: ";

    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i = 0 ; i<n ; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;

    while(q>0){
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }
    return 0;
}