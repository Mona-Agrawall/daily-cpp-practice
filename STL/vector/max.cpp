#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i<n ; i++){
        cout << "Enter the elements: ";
        cin >> vec[i];
        cout << endl;
    }
    int maxVal = vec[0];

    for(int i = 0 ; i < n ; i++){
        if(maxVal < vec[i]){
            maxVal = vec[i];
        }
    }

    cout << "The maximum element value is: " << maxVal ; 
    return 0;
}