#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res[n];
    int k = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            res[k] = arr[i];
            k++;
        }
    }

    if(k == 0){
        cout << "[]";
        return 0;
    }

    for(int i = 0; i < k; i++){
        cout << res[i] << " ";
    }

    return 0;
}