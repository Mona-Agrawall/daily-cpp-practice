#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    vector<int> vec(n);

    for(int i = 0 ; i<n ; i++){
        cin >> vec[i];
    }

    cout << "The revense of this given vector is: ";
    for (int i = n ; i>0;i--){
        cout << vec[i-1] << " ";
    }
    return 0;

}