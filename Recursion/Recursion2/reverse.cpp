#include<iostream>
#include<utility>
using namespace std;

void reverseArray(int arr[], int l, int r){
    if(l >= r) return;

    swap(arr[l], arr[r]);
    reverseArray(arr, l+1, r-1);
}

int main(){
    int arr[4] = {44,55,66,77};

    reverseArray(arr, 0, 3);

    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }
}